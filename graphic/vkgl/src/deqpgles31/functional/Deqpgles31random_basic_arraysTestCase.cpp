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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010039_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010039_2 "layout.random.basic_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010039, VkglTestCase_010039_1, VkglTestCase_010039_2);

#define VkglTestCase_010040_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010040_2 "layout.random.basic_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010040, VkglTestCase_010040_1, VkglTestCase_010040_2);

#define VkglTestCase_010041_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010041_2 "layout.random.basic_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010041, VkglTestCase_010041_1, VkglTestCase_010041_2);

#define VkglTestCase_010042_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010042_2 "layout.random.basic_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010042, VkglTestCase_010042_1, VkglTestCase_010042_2);

#define VkglTestCase_010043_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010043_2 "layout.random.basic_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010043, VkglTestCase_010043_1, VkglTestCase_010043_2);

#define VkglTestCase_010044_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010044_2 "layout.random.basic_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010044, VkglTestCase_010044_1, VkglTestCase_010044_2);

#define VkglTestCase_010045_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010045_2 "layout.random.basic_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010045, VkglTestCase_010045_1, VkglTestCase_010045_2);

#define VkglTestCase_010046_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010046_2 "layout.random.basic_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010046, VkglTestCase_010046_1, VkglTestCase_010046_2);

#define VkglTestCase_010047_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010047_2 "layout.random.basic_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010047, VkglTestCase_010047_1, VkglTestCase_010047_2);

#define VkglTestCase_010048_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010048_2 "layout.random.basic_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010048, VkglTestCase_010048_1, VkglTestCase_010048_2);

#define VkglTestCase_010049_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010049_2 "layout.random.basic_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010049, VkglTestCase_010049_1, VkglTestCase_010049_2);

#define VkglTestCase_010050_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010050_2 "layout.random.basic_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010050, VkglTestCase_010050_1, VkglTestCase_010050_2);

#define VkglTestCase_010051_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010051_2 "layout.random.basic_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010051, VkglTestCase_010051_1, VkglTestCase_010051_2);

#define VkglTestCase_010052_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010052_2 "layout.random.basic_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010052, VkglTestCase_010052_1, VkglTestCase_010052_2);

#define VkglTestCase_010053_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010053_2 "layout.random.basic_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010053, VkglTestCase_010053_1, VkglTestCase_010053_2);

#define VkglTestCase_010054_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010054_2 "layout.random.basic_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010054, VkglTestCase_010054_1, VkglTestCase_010054_2);

#define VkglTestCase_010055_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010055_2 "layout.random.basic_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010055, VkglTestCase_010055_1, VkglTestCase_010055_2);

#define VkglTestCase_010056_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010056_2 "layout.random.basic_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010056, VkglTestCase_010056_1, VkglTestCase_010056_2);

#define VkglTestCase_010057_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010057_2 "layout.random.basic_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010057, VkglTestCase_010057_1, VkglTestCase_010057_2);

#define VkglTestCase_010058_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010058_2 "layout.random.basic_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010058, VkglTestCase_010058_1, VkglTestCase_010058_2);

#define VkglTestCase_010059_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010059_2 "layout.random.basic_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010059, VkglTestCase_010059_1, VkglTestCase_010059_2);

#define VkglTestCase_010060_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010060_2 "layout.random.basic_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010060, VkglTestCase_010060_1, VkglTestCase_010060_2);

#define VkglTestCase_010061_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010061_2 "layout.random.basic_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010061, VkglTestCase_010061_1, VkglTestCase_010061_2);

#define VkglTestCase_010062_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010062_2 "layout.random.basic_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010062, VkglTestCase_010062_1, VkglTestCase_010062_2);

#define VkglTestCase_010063_1 "dEQP-GLES31.functional.ssbo."
#define VkglTestCase_010063_2 "layout.random.basic_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010063, VkglTestCase_010063_1, VkglTestCase_010063_2);
