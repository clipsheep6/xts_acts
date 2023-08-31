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
#include "../ActsSubgroups0002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002631, "dEQP-VK.subgroups.ballot_other.graphics.subgroupinverseballot.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002632, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotbitextract.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002633, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotbitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002634, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotinclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002635, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotexclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002636, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotfindlsb.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002637, "dEQP-VK.subgroups.ballot_other.graphics.subgroupballotfindmsb.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002638, "dEQP-VK.subgroups.ballot_other.compute.subgroupinverseballot.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002639, "dEQP-VK.subgroups.ballot_other.compute.subgroupinverseballot_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002640, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotbitextract.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002641, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotbitextract_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002642, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotbitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002643, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotbitcount_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002644, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotinclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002645, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotinclusivebitcount_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002646, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotexclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002647, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotexclusivebitcount_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002648, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotfindlsb.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002649, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotfindlsb_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002650, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotfindmsb.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002651, "dEQP-VK.subgroups.ballot_other.compute.subgroupballotfindmsb_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002652, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupinverseballot_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002653, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupinverseballot_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002654, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupinverseballot_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002655, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupinverseballot_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002656, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitextract_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002657, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitextract_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002658, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitextract_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002659, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitextract_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002660, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitcount_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002661, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitcount_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002662, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitcount_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002663, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotbitcount_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002664, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotinclusivebitcount_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002665, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotinclusivebitcount_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002666, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotinclusivebitcount_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002667, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotinclusivebitcount_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002668, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotexclusivebitcount_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002669, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotexclusivebitcount_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002670, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotexclusivebitcount_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002671, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotexclusivebitcount_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002672, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindlsb_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002673, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindlsb_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002674, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindlsb_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002675, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindlsb_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002676, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindmsb_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002677, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindmsb_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002678, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindmsb_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002679, "dEQP-VK.subgroups.ballot_other.framebuffer.subgroupballotfindmsb_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002680, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupinverseballot.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002681, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotbitextract.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002682, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotbitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002683, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotinclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002684, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotexclusivebitcount.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002685, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotfindlsb.*");

static SHRINK_HWTEST_F(ActsSubgroups0002TS, TC002686, "dEQP-VK.subgroups.ballot_other.ray_tracing.subgroupballotfindmsb.*");
