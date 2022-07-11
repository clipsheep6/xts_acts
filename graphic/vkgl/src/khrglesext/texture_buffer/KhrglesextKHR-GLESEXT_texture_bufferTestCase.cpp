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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000274_1 "KHR-GLESEXT.texture_buffer.textu"
#define VkglTestCase_000274_2 "re_buffer_operations_buffer_load"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "KHR-GLESEXT.texture_buffer.text"
#define VkglTestCase_000275_2 "ure_buffer_operations_cpu_writes"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "KHR-GLESEXT.texture_buffer.texture_b"
#define VkglTestCase_000276_2 "uffer_operations_framebuffer_readback"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "KHR-GLESEXT.texture_buffer.texture_"
#define VkglTestCase_000277_2 "buffer_operations_transform_feedback"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "KHR-GLESEXT.texture_buffer.textu"
#define VkglTestCase_000278_2 "re_buffer_operations_image_store"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "KHR-GLESEXT.texture_buffer.textu"
#define VkglTestCase_000279_2 "re_buffer_operations_ssbo_writes"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "KHR-GLESEXT.texture_buffe"
#define VkglTestCase_000280_2 "r.texture_buffer_max_size"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);

#define VkglTestCase_000281_1 "KHR-GLESEXT.texture_buffer.text"
#define VkglTestCase_000281_2 "ure_buffer_texture_buffer_range"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "KHR-GLESEXT.texture_buffer.te"
#define VkglTestCase_000282_2 "xture_buffer_conv_int_to_float"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "KHR-GLESEXT.texture_buffer.te"
#define VkglTestCase_000283_2 "xture_buffer_atomic_functions"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "KHR-GLESEXT.texture_buffer"
#define VkglTestCase_000284_2 ".texture_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "KHR-GLESEXT.texture_buff"
#define VkglTestCase_000285_2 "er.texture_buffer_errors"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "KHR-GLESEXT.texture_buffer.texture_buffer"
#define VkglTestCase_000286_2 "_active_uniform_validation_fragment_shader"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "KHR-GLESEXT.texture_buffer.texture_buffer"
#define VkglTestCase_000287_2 "_active_uniform_validation_compute_shader"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "KHR-GLESEXT.texture_buffer.te"
#define VkglTestCase_000288_2 "xture_buffer_buffer_parameters"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "KHR-GLESEXT.texture_buffe"
#define VkglTestCase_000289_2 "r.texture_buffer_precision"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);
