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
#include "../ActsSubgroups0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000021, "dEQP-VK.subgroups.builtin_mask_var.graphics.subgroupeqmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000022, "dEQP-VK.subgroups.builtin_mask_var.graphics.subgroupgemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000023, "dEQP-VK.subgroups.builtin_mask_var.graphics.subgroupgtmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000024, "dEQP-VK.subgroups.builtin_mask_var.graphics.subgrouplemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000025, "dEQP-VK.subgroups.builtin_mask_var.graphics.subgroupltmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000026, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupeqmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000027, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupeqmask_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000028, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupgemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000029, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupgemask_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000030, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupgtmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000031, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupgtmask_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000032, "dEQP-VK.subgroups.builtin_mask_var.compute.subgrouplemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000033, "dEQP-VK.subgroups.builtin_mask_var.compute.subgrouplemask_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000034, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupltmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000035, "dEQP-VK.subgroups.builtin_mask_var.compute.subgroupltmask_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000036, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupeqmask_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000037, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupeqmask_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000038, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupeqmask_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000039, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupeqmask_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000040, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgemask_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000041, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgemask_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000042, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgemask_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000043, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgemask_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000044, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgtmask_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000045, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgtmask_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000046, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgtmask_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000047, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupgtmask_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000048, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgrouplemask_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000049, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgrouplemask_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000050, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgrouplemask_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000051, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgrouplemask_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000052, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupltmask_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000053, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupltmask_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000054, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupltmask_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000055, "dEQP-VK.subgroups.builtin_mask_var.framebuffer.subgroupltmask_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000056, "dEQP-VK.subgroups.builtin_mask_var.ray_tracing.subgroupeqmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000057, "dEQP-VK.subgroups.builtin_mask_var.ray_tracing.subgroupgemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000058, "dEQP-VK.subgroups.builtin_mask_var.ray_tracing.subgroupgtmask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000059, "dEQP-VK.subgroups.builtin_mask_var.ray_tracing.subgrouplemask.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000060, "dEQP-VK.subgroups.builtin_mask_var.ray_tracing.subgroupltmask.*");
