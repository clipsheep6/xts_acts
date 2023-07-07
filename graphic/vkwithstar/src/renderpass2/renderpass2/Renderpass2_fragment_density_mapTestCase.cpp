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

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000675, "dEQP-VK.renderpass2.fragment_density_map.1_view.render.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000676, "dEQP-VK.renderpass2.fragment_density_map.1_view.render_copy.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000677, "dEQP-VK.renderpass2.fragment_density_map.2_views.render.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000678, "dEQP-VK.renderpass2.fragment_density_map.2_views.render_copy.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000679, "dEQP-VK.renderpass2.fragment_density_map.4_views.render.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000680, "dEQP-VK.renderpass2.fragment_density_map.4_views.render_copy.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000681, "dEQP-VK.renderpass2.fragment_density_map.6_views.render.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000682, "dEQP-VK.renderpass2.fragment_density_map.6_views.render_copy.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000683, "dEQP-VK.renderpass2.fragment_density_map.properties.2_subsampled_samplers.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000684, "dEQP-VK.renderpass2.fragment_density_map.properties.4_subsampled_samplers.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000685, "dEQP-VK.renderpass2.fragment_density_map.properties.6_subsampled_samplers.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000686, "dEQP-VK.renderpass2.fragment_density_map.properties.8_subsampled_samplers.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000687, "dEQP-VK.renderpass2.fragment_density_map.properties.subsampled_loads.*");

static SHRINK_HWTEST_F(ActsRenderpass20001TS, TC000688, "dEQP-VK.renderpass2.fragment_density_map.properties.subsampled_coarse_reconstruction.*");
