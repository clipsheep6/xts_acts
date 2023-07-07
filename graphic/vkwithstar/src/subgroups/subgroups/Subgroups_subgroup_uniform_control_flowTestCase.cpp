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

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020715, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020716, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020717, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020718, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020719, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020720, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020721, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020722, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020723, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020724, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020725, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020726, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020727, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020728, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020729, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020730, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020731, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020732, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020733, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020734, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020735, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full.subgroup_reconverge20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020736, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020737, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020738, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020739, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020740, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020741, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020742, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020743, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020744, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020745, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020746, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020747, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020748, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020749, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020750, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020751, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020752, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020753, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020754, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020755, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020756, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial.subgroup_reconverge_partial20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020757, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020758, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020759, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020760, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020761, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020762, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020763, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020764, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020765, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020766, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020767, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020768, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020769, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020770, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020771, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020772, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020773, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020774, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020775, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020776, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020777, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_full_control.subgroup_reconverge20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020778, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020779, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020780, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020781, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020782, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020783, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020784, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020785, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020786, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020787, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020788, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020789, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020790, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020791, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020792, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020793, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020794, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020795, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020796, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020797, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020798, "dEQP-VK.subgroups.subgroup_uniform_control_flow.large_partial_control.subgroup_reconverge_partial20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020799, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020800, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020801, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020802, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020803, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020804, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020805, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020806, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020807, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020808, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020809, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020810, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020811, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020812, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020813, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020814, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020815, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020816, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020817, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020818, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020819, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full.small_subgroup_reconverge20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020820, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020821, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020822, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020823, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020824, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020825, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020826, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020827, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020828, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020829, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020830, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020831, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020832, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020833, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020834, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020835, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020836, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020837, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020838, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020839, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020840, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial.small_subgroup_reconverge_partial20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020841, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020842, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020843, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020844, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020845, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020846, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020847, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020848, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020849, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020850, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020851, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020852, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020853, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020854, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020855, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020856, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020857, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020858, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020859, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020860, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020861, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_full_control.small_subgroup_reconverge20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020862, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial00.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020863, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial01.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020864, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial02.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020865, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial03.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020866, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial04.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020867, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial05.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020868, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial06.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020869, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial07.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020870, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial08.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020871, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial09.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020872, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial10.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020873, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial11.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020874, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial12.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020875, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial13.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020876, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial14.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020877, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial15.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020878, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial16.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020879, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial17.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020880, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial18.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020881, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial19.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020882, "dEQP-VK.subgroups.subgroup_uniform_control_flow.small_partial_control.small_subgroup_reconverge_partial20.*");

static SHRINK_HWTEST_F(ActsSubgroups0011TS, TC020883, "dEQP-VK.subgroups.subgroup_uniform_control_flow.discard.subgroup_reconverge_discard00.*");
