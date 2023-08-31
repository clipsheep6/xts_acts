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

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000061, "dEQP-VK.subgroups.basic.graphics.subgroupelect.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000062, "dEQP-VK.subgroups.basic.graphics.subgroupbarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000063, "dEQP-VK.subgroups.basic.graphics.subgroupmemorybarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000064, "dEQP-VK.subgroups.basic.graphics.subgroupmemorybarrierbuffer.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000065, "dEQP-VK.subgroups.basic.graphics.subgroupmemorybarrierimage.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000066, "dEQP-VK.subgroups.basic.compute.subgroupelect.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000067, "dEQP-VK.subgroups.basic.compute.subgroupelect_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000068, "dEQP-VK.subgroups.basic.compute.subgroupbarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000069, "dEQP-VK.subgroups.basic.compute.subgroupbarrier_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000070, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000071, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrier_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000072, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrierbuffer.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000073, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrierbuffer_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000074, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarriershared.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000075, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarriershared_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000076, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrierimage.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000077, "dEQP-VK.subgroups.basic.compute.subgroupmemorybarrierimage_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000078, "dEQP-VK.subgroups.basic.framebuffer.subgroupelect_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000079, "dEQP-VK.subgroups.basic.framebuffer.subgroupelect_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000080, "dEQP-VK.subgroups.basic.framebuffer.subgroupelect_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000081, "dEQP-VK.subgroups.basic.framebuffer.subgroupelect_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000082, "dEQP-VK.subgroups.basic.framebuffer.subgroupbarrier_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000083, "dEQP-VK.subgroups.basic.framebuffer.subgroupbarrier_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000084, "dEQP-VK.subgroups.basic.framebuffer.subgroupbarrier_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000085, "dEQP-VK.subgroups.basic.framebuffer.subgroupbarrier_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000086, "dEQP-VK.subgroups.basic.framebuffer.subgroupbarrier_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000087, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrier_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000088, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrier_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000089, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrier_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000090, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrier_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000091, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrier_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000092, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierbuffer_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000093, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierbuffer_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000094, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierbuffer_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000095, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierbuffer_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000096, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierbuffer_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000097, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierimage_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000098, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierimage_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000099, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierimage_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000100, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierimage_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000101, "dEQP-VK.subgroups.basic.framebuffer.subgroupmemorybarrierimage_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000102, "dEQP-VK.subgroups.basic.ray_tracing.subgroupelect.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000103, "dEQP-VK.subgroups.basic.ray_tracing.subgroupbarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000104, "dEQP-VK.subgroups.basic.ray_tracing.subgroupmemorybarrier.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000105, "dEQP-VK.subgroups.basic.ray_tracing.subgroupmemorybarrierbuffer.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000106, "dEQP-VK.subgroups.basic.ray_tracing.subgroupmemorybarrierimage.*");
