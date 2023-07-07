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
#include "../RobustnessBaseFunc.h"
#include "../ActsRobustness0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000015, "dEQP-VK.robustness.vertex_access.r32_uint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000016, "dEQP-VK.robustness.vertex_access.r32_uint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000017, "dEQP-VK.robustness.vertex_access.r32_sint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000018, "dEQP-VK.robustness.vertex_access.r32_sint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000019, "dEQP-VK.robustness.vertex_access.r32_sfloat.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000020, "dEQP-VK.robustness.vertex_access.r32_sfloat.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000021, "dEQP-VK.robustness.vertex_access.r32g32_uint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000022, "dEQP-VK.robustness.vertex_access.r32g32_uint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000023, "dEQP-VK.robustness.vertex_access.r32g32_sint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000024, "dEQP-VK.robustness.vertex_access.r32g32_sint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000025, "dEQP-VK.robustness.vertex_access.r32g32_sfloat.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000026, "dEQP-VK.robustness.vertex_access.r32g32_sfloat.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000027, "dEQP-VK.robustness.vertex_access.r32g32b32_uint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000028, "dEQP-VK.robustness.vertex_access.r32g32b32_uint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000029, "dEQP-VK.robustness.vertex_access.r32g32b32_sint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000030, "dEQP-VK.robustness.vertex_access.r32g32b32_sint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000031, "dEQP-VK.robustness.vertex_access.r32g32b32_sfloat.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000032, "dEQP-VK.robustness.vertex_access.r32g32b32_sfloat.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000033, "dEQP-VK.robustness.vertex_access.r32g32b32a32_uint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000034, "dEQP-VK.robustness.vertex_access.r32g32b32a32_uint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000035, "dEQP-VK.robustness.vertex_access.r32g32b32a32_sint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000036, "dEQP-VK.robustness.vertex_access.r32g32b32a32_sint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000037, "dEQP-VK.robustness.vertex_access.r32g32b32a32_sfloat.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000038, "dEQP-VK.robustness.vertex_access.r32g32b32a32_sfloat.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000039, "dEQP-VK.robustness.vertex_access.r64_uint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000040, "dEQP-VK.robustness.vertex_access.r64_uint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000041, "dEQP-VK.robustness.vertex_access.r64_sint.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000042, "dEQP-VK.robustness.vertex_access.r64_sint.draw_indexed.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000043, "dEQP-VK.robustness.vertex_access.a2b10g10r10_unorm_pack32.draw.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000044, "dEQP-VK.robustness.vertex_access.a2b10g10r10_unorm_pack32.draw_indexed.*");
