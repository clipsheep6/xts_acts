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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000049_1 "KHR-GLES31.core.texture_storage_multisample.GLC"
#define VkglTestCase_000049_2 "overage.extension_specific_enums_are_recognized"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000049, VkglTestCase_000049_1, VkglTestCase_000049_2);

#define VkglTestCase_000050_1 "KHR-GLES31.core.texture_storage_multisample.GLCoverage.get_tex_para"
#define VkglTestCase_000050_2 "meter_reports_correct_default_values_for_multisample_texture_targets"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000050, VkglTestCase_000050_1, VkglTestCase_000050_2);

#define VkglTestCase_000051_1 "KHR-GLES31.core.texture_storage_multisample.GLCover"
#define VkglTestCase_000051_2 "age.gl_sample_mask_mode_status_is_reported_correctly"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000051, VkglTestCase_000051_1, VkglTestCase_000051_2);

#define VkglTestCase_000052_1 "KHR-GLES31.core.texture_storage_multisample.GLCover"
#define VkglTestCase_000052_2 "age.gl_tex_parameter_handlers_accept_zero_base_level"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000052, VkglTestCase_000052_1, VkglTestCase_000052_2);
