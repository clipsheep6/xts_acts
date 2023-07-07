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
#include "../ImageBaseFunc.h"
#include "../ActsImage0007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0007TS, TC013074, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_stencil_attachment_optimal.d16_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013075, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_stencil_attachment_optimal.d24_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013076, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_stencil_attachment_optimal.d32_sfloat_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013077, "dEQP-VK.image.depth_stencil_descriptor.depth_attachment_stencil_read_only_optimal.d16_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013078, "dEQP-VK.image.depth_stencil_descriptor.depth_attachment_stencil_read_only_optimal.d24_unorm_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013079, "dEQP-VK.image.depth_stencil_descriptor.depth_attachment_stencil_read_only_optimal.d32_sfloat_s8_uint.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013080, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_optimal.d16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013081, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_optimal.x8_d24_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013082, "dEQP-VK.image.depth_stencil_descriptor.depth_read_only_optimal.d32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013083, "dEQP-VK.image.depth_stencil_descriptor.stencil_read_only_optimal.s8_uint.*");
