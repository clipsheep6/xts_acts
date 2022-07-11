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

#define VkglTestCase_020042_1 "dEQP-GLES31.functional.fbo.srgb_wri"
#define VkglTestCase_020042_2 "te_control.framebuffer_srgb_enabled"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020042, VkglTestCase_020042_1, VkglTestCase_020042_2);

#define VkglTestCase_020043_1 "dEQP-GLES31.functional.fbo.srgb_write_co"
#define VkglTestCase_020043_2 "ntrol.framebuffer_srgb_enabled_col_attach"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020043, VkglTestCase_020043_1, VkglTestCase_020043_2);

#define VkglTestCase_020044_1 "dEQP-GLES31.functional.fbo.srgb_write_"
#define VkglTestCase_020044_2 "control.framebuffer_srgb_enabled_blend"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020044, VkglTestCase_020044_1, VkglTestCase_020044_2);

#define VkglTestCase_020045_1 "dEQP-GLES31.functional.fbo.srgb_write_control"
#define VkglTestCase_020045_2 ".framebuffer_srgb_enabled_render_target_ignore"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020045, VkglTestCase_020045_1, VkglTestCase_020045_2);

#define VkglTestCase_020046_1 "dEQP-GLES31.functional.fbo.srgb_write_cont"
#define VkglTestCase_020046_2 "rol.framebuffer_srgb_enabled_copy_to_linear"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020046, VkglTestCase_020046_1, VkglTestCase_020046_2);

#define VkglTestCase_020047_1 "dEQP-GLES31.functional.fbo.srgb_write_c"
#define VkglTestCase_020047_2 "ontrol.framebuffer_srgb_unsupported_enum"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020047, VkglTestCase_020047_1, VkglTestCase_020047_2);
