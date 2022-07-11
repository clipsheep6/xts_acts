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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025244_1 "dEQP-GLES31.functional.android_extension_pack.shaders.es32"
#define VkglTestCase_025244_2 ".implementation_limits.max_fragment_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025244, VkglTestCase_025244_1, VkglTestCase_025244_2);

#define VkglTestCase_025245_1 "dEQP-GLES31.functional.android_extension_pack.shaders."
#define VkglTestCase_025245_2 "es32.implementation_limits.max_fragment_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025245, VkglTestCase_025245_1, VkglTestCase_025245_2);

#define VkglTestCase_025246_1 "dEQP-GLES31.functional.android_extension_pack.shaders."
#define VkglTestCase_025246_2 "es32.implementation_limits.max_fragment_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025246, VkglTestCase_025246_1, VkglTestCase_025246_2);

#define VkglTestCase_025247_1 "dEQP-GLES31.functional.android_extension_pack.shaders.es3"
#define VkglTestCase_025247_2 "2.implementation_limits.max_fragment_shader_storage_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025247, VkglTestCase_025247_1, VkglTestCase_025247_2);
