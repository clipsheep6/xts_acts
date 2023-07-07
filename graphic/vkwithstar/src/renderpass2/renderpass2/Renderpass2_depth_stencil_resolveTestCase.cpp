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
#include "../Renderpass2BaseFunc.h"
#include "../ActsRenderpass20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000001, "dEQP-VK.renderpass2.depth_stencil_resolve.misc.properties.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000002, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000003, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000004, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000005, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000006, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000007, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_32_32.samples_64.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000008, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000009, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000010, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000011, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000012, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000013, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_8_32.samples_64.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000014, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000015, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000016, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000017, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000018, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000019, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_49_13.samples_64.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000020, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000021, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000022, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000023, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000024, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000025, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_5_1.samples_64.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000026, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000027, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000028, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000029, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000030, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000031, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_17_1.samples_64.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000032, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_2.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000033, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_4.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000034, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_8.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000035, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_16.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000036, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_32.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000037, "dEQP-VK.renderpass2.depth_stencil_resolve.image_2d_16_64_6.samples_64.*");
