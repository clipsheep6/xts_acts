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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003164_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interpol"
#define VkglTestCase_003164_2 "ate_at_sample.non_multisample_buffer.sample_0_default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003164, VkglTestCase_003164_1, VkglTestCase_003164_2);

#define VkglTestCase_003165_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interpol"
#define VkglTestCase_003165_2 "ate_at_sample.non_multisample_buffer.sample_0_singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003165, VkglTestCase_003165_1, VkglTestCase_003165_2);

#define VkglTestCase_003166_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interp"
#define VkglTestCase_003166_2 "olate_at_sample.non_multisample_buffer.sample_0_singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003166, VkglTestCase_003166_1, VkglTestCase_003166_2);

#define VkglTestCase_003167_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interpol"
#define VkglTestCase_003167_2 "ate_at_sample.non_multisample_buffer.sample_n_default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003167, VkglTestCase_003167_1, VkglTestCase_003167_2);

#define VkglTestCase_003168_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interpol"
#define VkglTestCase_003168_2 "ate_at_sample.non_multisample_buffer.sample_n_singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003168, VkglTestCase_003168_1, VkglTestCase_003168_2);

#define VkglTestCase_003169_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.interp"
#define VkglTestCase_003169_2 "olate_at_sample.non_multisample_buffer.sample_n_singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003169, VkglTestCase_003169_1, VkglTestCase_003169_2);
