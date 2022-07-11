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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000060_1 "KHR-GLES31.core.shader_atomic_c"
#define VkglTestCase_000060_2 "ounters.basic-buffer-operations"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000060, VkglTestCase_000060_1, VkglTestCase_000060_2);

#define VkglTestCase_000061_1 "KHR-GLES31.core.shader_atomi"
#define VkglTestCase_000061_2 "c_counters.basic-buffer-state"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000061, VkglTestCase_000061_1, VkglTestCase_000061_2);

#define VkglTestCase_000062_1 "KHR-GLES31.core.shader_atomi"
#define VkglTestCase_000062_2 "c_counters.basic-buffer-bind"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000062, VkglTestCase_000062_1, VkglTestCase_000062_2);

#define VkglTestCase_000063_1 "KHR-GLES31.core.shader_atomi"
#define VkglTestCase_000063_2 "c_counters.basic-program-max"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000063, VkglTestCase_000063_1, VkglTestCase_000063_2);

#define VkglTestCase_000064_1 "KHR-GLES31.core.shader_atomic"
#define VkglTestCase_000064_2 "_counters.basic-program-query"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000064, VkglTestCase_000064_1, VkglTestCase_000064_2);

#define VkglTestCase_000065_1 "KHR-GLES31.core.shader_atomi"
#define VkglTestCase_000065_2 "c_counters.basic-usage-simple"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000065, VkglTestCase_000065_1, VkglTestCase_000065_2);

#define VkglTestCase_000066_1 "KHR-GLES31.core.shader_atomic_"
#define VkglTestCase_000066_2 "counters.basic-usage-no-offset"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000066, VkglTestCase_000066_1, VkglTestCase_000066_2);

#define VkglTestCase_000067_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000067_2 "mic_counters.basic-usage-fs"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000067, VkglTestCase_000067_1, VkglTestCase_000067_2);

#define VkglTestCase_000068_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000068_2 "mic_counters.basic-usage-vs"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000068, VkglTestCase_000068_1, VkglTestCase_000068_2);

#define VkglTestCase_000069_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000069_2 "mic_counters.basic-usage-cs"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000069, VkglTestCase_000069_1, VkglTestCase_000069_2);

#define VkglTestCase_000070_1 "KHR-GLES31.core.shader_atomic"
#define VkglTestCase_000070_2 "_counters.basic-glsl-built-in"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000070, VkglTestCase_000070_1, VkglTestCase_000070_2);

#define VkglTestCase_000071_1 "KHR-GLES31.core.shader_atomic_co"
#define VkglTestCase_000071_2 "unters.advanced-usage-multi-stage"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000071, VkglTestCase_000071_1, VkglTestCase_000071_2);

#define VkglTestCase_000072_1 "KHR-GLES31.core.shader_atomic_count"
#define VkglTestCase_000072_2 "ers.advanced-usage-draw-update-draw"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000072, VkglTestCase_000072_1, VkglTestCase_000072_2);

#define VkglTestCase_000073_1 "KHR-GLES31.core.shader_atomic_cou"
#define VkglTestCase_000073_2 "nters.advanced-usage-many-counters"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000073, VkglTestCase_000073_1, VkglTestCase_000073_2);

#define VkglTestCase_000074_1 "KHR-GLES31.core.shader_atomic_counter"
#define VkglTestCase_000074_2 "s.advanced-usage-multidim-array-medium"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000074, VkglTestCase_000074_1, VkglTestCase_000074_2);

#define VkglTestCase_000075_1 "KHR-GLES31.core.shader_atomic_counter"
#define VkglTestCase_000075_2 "s.advanced-usage-multidim-array-large"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000075, VkglTestCase_000075_1, VkglTestCase_000075_2);

#define VkglTestCase_000076_1 "KHR-GLES31.core.shader_atomic_coun"
#define VkglTestCase_000076_2 "ters.advanced-usage-switch-programs"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000076, VkglTestCase_000076_1, VkglTestCase_000076_2);

#define VkglTestCase_000077_1 "KHR-GLES31.core.shader_atomi"
#define VkglTestCase_000077_2 "c_counters.advanced-usage-ubo"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000077, VkglTestCase_000077_1, VkglTestCase_000077_2);

#define VkglTestCase_000078_1 "KHR-GLES31.core.shader_atomic_coun"
#define VkglTestCase_000078_2 "ters.advanced-usage-many-draw-calls"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000078, VkglTestCase_000078_1, VkglTestCase_000078_2);

#define VkglTestCase_000079_1 "KHR-GLES31.core.shader_atomic_count"
#define VkglTestCase_000079_2 "ers.advanced-usage-many-draw-calls2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000079, VkglTestCase_000079_1, VkglTestCase_000079_2);

#define VkglTestCase_000080_1 "KHR-GLES31.core.shader_atomic_coun"
#define VkglTestCase_000080_2 "ters.advanced-usage-many-dispatches"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000080, VkglTestCase_000080_1, VkglTestCase_000080_2);

#define VkglTestCase_000081_1 "KHR-GLES31.core.shader_at"
#define VkglTestCase_000081_2 "omic_counters.negative-api"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000081, VkglTestCase_000081_1, VkglTestCase_000081_2);

#define VkglTestCase_000082_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000082_2 "mic_counters.negative-glsl"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000082, VkglTestCase_000082_1, VkglTestCase_000082_2);

#define VkglTestCase_000083_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000083_2 "mic_counters.negative-ssbo"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000083, VkglTestCase_000083_1, VkglTestCase_000083_2);

#define VkglTestCase_000084_1 "KHR-GLES31.core.shader_at"
#define VkglTestCase_000084_2 "omic_counters.negative-ubo"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000084, VkglTestCase_000084_1, VkglTestCase_000084_2);

#define VkglTestCase_000085_1 "KHR-GLES31.core.shader_atom"
#define VkglTestCase_000085_2 "ic_counters.negative-uniform"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000085, VkglTestCase_000085_1, VkglTestCase_000085_2);

#define VkglTestCase_000086_1 "KHR-GLES31.core.shader_ato"
#define VkglTestCase_000086_2 "mic_counters.negative-array"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000086, VkglTestCase_000086_1, VkglTestCase_000086_2);

#define VkglTestCase_000087_1 "KHR-GLES31.core.shader_atomic"
#define VkglTestCase_000087_2 "_counters.negative-arithmetic"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000087, VkglTestCase_000087_1, VkglTestCase_000087_2);

#define VkglTestCase_000088_1 "KHR-GLES31.core.shader_atomic_"
#define VkglTestCase_000088_2 "counters.negative-unsized-array"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000088, VkglTestCase_000088_1, VkglTestCase_000088_2);
