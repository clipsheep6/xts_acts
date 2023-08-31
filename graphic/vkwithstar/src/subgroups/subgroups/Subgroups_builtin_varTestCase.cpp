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

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000001, "dEQP-VK.subgroups.builtin_var.graphics.subgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000002, "dEQP-VK.subgroups.builtin_var.graphics.subgroupinvocationid.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000003, "dEQP-VK.subgroups.builtin_var.compute.subgroupsize_compute.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000004, "dEQP-VK.subgroups.builtin_var.compute.subgroupsize_compute_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000005, "dEQP-VK.subgroups.builtin_var.compute.subgroupinvocationid_compute.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000006, "dEQP-VK.subgroups.builtin_var.compute.subgroupinvocationid_compute_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000007, "dEQP-VK.subgroups.builtin_var.compute.numsubgroups.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000008, "dEQP-VK.subgroups.builtin_var.compute.numsubgroups_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000009, "dEQP-VK.subgroups.builtin_var.compute.subgroupid.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000010, "dEQP-VK.subgroups.builtin_var.compute.subgroupid_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000011, "dEQP-VK.subgroups.builtin_var.ray_tracing.subgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000012, "dEQP-VK.subgroups.builtin_var.ray_tracing.subgroupinvocationid.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000013, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupsize_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000014, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupsize_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000015, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupsize_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000016, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupsize_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000017, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupinvocationid_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000018, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupinvocationid_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000019, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupinvocationid_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000020, "dEQP-VK.subgroups.builtin_var.framebuffer.subgroupinvocationid_geometry.*");
