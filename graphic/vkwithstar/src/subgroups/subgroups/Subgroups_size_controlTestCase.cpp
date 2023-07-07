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
#include "../SubgroupsBaseFunc.h"
#include "../ActsSubgroups0011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020686, "dEQP-VK.subgroups.size_control.generic.subgroup_size_properties.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020687, "dEQP-VK.subgroups.size_control.graphics.allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020688, "dEQP-VK.subgroups.size_control.graphics.required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020689, "dEQP-VK.subgroups.size_control.graphics.required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020690, "dEQP-VK.subgroups.size_control.compute.allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020691, "dEQP-VK.subgroups.size_control.compute.require_full_subgroups.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020692, "dEQP-VK.subgroups.size_control.compute.require_full_subgroups_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020693, "dEQP-VK.subgroups.size_control.compute.required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020694, "dEQP-VK.subgroups.size_control.compute.required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020695, "dEQP-VK.subgroups.size_control.compute.required_subgroup_size_max_require_full_subgroups.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020696, "dEQP-VK.subgroups.size_control.compute.required_subgroup_size_min_require_full_subgroups.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020697, "dEQP-VK.subgroups.size_control.framebuffer.vertex_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020698, "dEQP-VK.subgroups.size_control.framebuffer.tess_eval_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020699, "dEQP-VK.subgroups.size_control.framebuffer.tess_control_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020700, "dEQP-VK.subgroups.size_control.framebuffer.geometry_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020701, "dEQP-VK.subgroups.size_control.framebuffer.fragment_allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020702, "dEQP-VK.subgroups.size_control.framebuffer.vertex_required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020703, "dEQP-VK.subgroups.size_control.framebuffer.vertex_required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020704, "dEQP-VK.subgroups.size_control.framebuffer.tess_eval_required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020705, "dEQP-VK.subgroups.size_control.framebuffer.tess_eval_required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020706, "dEQP-VK.subgroups.size_control.framebuffer.tess_control_required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020707, "dEQP-VK.subgroups.size_control.framebuffer.tess_control_required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020708, "dEQP-VK.subgroups.size_control.framebuffer.geometry_required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020709, "dEQP-VK.subgroups.size_control.framebuffer.geometry_required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020710, "dEQP-VK.subgroups.size_control.framebuffer.fragment_required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020711, "dEQP-VK.subgroups.size_control.framebuffer.fragment_required_subgroup_size_min.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020712, "dEQP-VK.subgroups.size_control.ray_tracing.allow_varying_subgroup_size.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020713, "dEQP-VK.subgroups.size_control.ray_tracing.required_subgroup_size_max.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020714, "dEQP-VK.subgroups.size_control.ray_tracing.required_subgroup_size_min.*");
