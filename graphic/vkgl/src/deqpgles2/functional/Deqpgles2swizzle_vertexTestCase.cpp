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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008932_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008932_2 "ers.random.swizzle.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008932, VkglTestCase_008932_1, VkglTestCase_008932_2);

#define VkglTestCase_008933_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008933_2 "ers.random.swizzle.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008933, VkglTestCase_008933_1, VkglTestCase_008933_2);

#define VkglTestCase_008934_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008934_2 "ers.random.swizzle.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008934, VkglTestCase_008934_1, VkglTestCase_008934_2);

#define VkglTestCase_008935_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008935_2 "ers.random.swizzle.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008935, VkglTestCase_008935_1, VkglTestCase_008935_2);

#define VkglTestCase_008936_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008936_2 "ers.random.swizzle.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008936, VkglTestCase_008936_1, VkglTestCase_008936_2);

#define VkglTestCase_008937_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008937_2 "ers.random.swizzle.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008937, VkglTestCase_008937_1, VkglTestCase_008937_2);

#define VkglTestCase_008938_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008938_2 "ers.random.swizzle.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008938, VkglTestCase_008938_1, VkglTestCase_008938_2);

#define VkglTestCase_008939_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008939_2 "ers.random.swizzle.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008939, VkglTestCase_008939_1, VkglTestCase_008939_2);

#define VkglTestCase_008940_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008940_2 "ers.random.swizzle.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008940, VkglTestCase_008940_1, VkglTestCase_008940_2);

#define VkglTestCase_008941_1 "dEQP-GLES2.functional.shad"
#define VkglTestCase_008941_2 "ers.random.swizzle.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008941, VkglTestCase_008941_1, VkglTestCase_008941_2);

#define VkglTestCase_008942_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008942_2 "rs.random.swizzle.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008942, VkglTestCase_008942_1, VkglTestCase_008942_2);

#define VkglTestCase_008943_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008943_2 "rs.random.swizzle.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008943, VkglTestCase_008943_1, VkglTestCase_008943_2);

#define VkglTestCase_008944_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008944_2 "rs.random.swizzle.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008944, VkglTestCase_008944_1, VkglTestCase_008944_2);

#define VkglTestCase_008945_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008945_2 "rs.random.swizzle.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008945, VkglTestCase_008945_1, VkglTestCase_008945_2);

#define VkglTestCase_008946_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008946_2 "rs.random.swizzle.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008946, VkglTestCase_008946_1, VkglTestCase_008946_2);

#define VkglTestCase_008947_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008947_2 "rs.random.swizzle.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008947, VkglTestCase_008947_1, VkglTestCase_008947_2);

#define VkglTestCase_008948_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008948_2 "rs.random.swizzle.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008948, VkglTestCase_008948_1, VkglTestCase_008948_2);

#define VkglTestCase_008949_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008949_2 "rs.random.swizzle.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008949, VkglTestCase_008949_1, VkglTestCase_008949_2);

#define VkglTestCase_008950_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008950_2 "rs.random.swizzle.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008950, VkglTestCase_008950_1, VkglTestCase_008950_2);

#define VkglTestCase_008951_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008951_2 "rs.random.swizzle.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008951, VkglTestCase_008951_1, VkglTestCase_008951_2);

#define VkglTestCase_008952_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008952_2 "rs.random.swizzle.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008952, VkglTestCase_008952_1, VkglTestCase_008952_2);

#define VkglTestCase_008953_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008953_2 "rs.random.swizzle.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008953, VkglTestCase_008953_1, VkglTestCase_008953_2);

#define VkglTestCase_008954_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008954_2 "rs.random.swizzle.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008954, VkglTestCase_008954_1, VkglTestCase_008954_2);

#define VkglTestCase_008955_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008955_2 "rs.random.swizzle.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008955, VkglTestCase_008955_1, VkglTestCase_008955_2);

#define VkglTestCase_008956_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008956_2 "rs.random.swizzle.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008956, VkglTestCase_008956_1, VkglTestCase_008956_2);

#define VkglTestCase_008957_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008957_2 "rs.random.swizzle.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008957, VkglTestCase_008957_1, VkglTestCase_008957_2);

#define VkglTestCase_008958_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008958_2 "rs.random.swizzle.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008958, VkglTestCase_008958_1, VkglTestCase_008958_2);

#define VkglTestCase_008959_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008959_2 "rs.random.swizzle.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008959, VkglTestCase_008959_1, VkglTestCase_008959_2);

#define VkglTestCase_008960_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008960_2 "rs.random.swizzle.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008960, VkglTestCase_008960_1, VkglTestCase_008960_2);

#define VkglTestCase_008961_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008961_2 "rs.random.swizzle.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008961, VkglTestCase_008961_1, VkglTestCase_008961_2);

#define VkglTestCase_008962_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008962_2 "rs.random.swizzle.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008962, VkglTestCase_008962_1, VkglTestCase_008962_2);

#define VkglTestCase_008963_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008963_2 "rs.random.swizzle.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008963, VkglTestCase_008963_1, VkglTestCase_008963_2);

#define VkglTestCase_008964_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008964_2 "rs.random.swizzle.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008964, VkglTestCase_008964_1, VkglTestCase_008964_2);

#define VkglTestCase_008965_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008965_2 "rs.random.swizzle.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008965, VkglTestCase_008965_1, VkglTestCase_008965_2);

#define VkglTestCase_008966_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008966_2 "rs.random.swizzle.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008966, VkglTestCase_008966_1, VkglTestCase_008966_2);

#define VkglTestCase_008967_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008967_2 "rs.random.swizzle.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008967, VkglTestCase_008967_1, VkglTestCase_008967_2);

#define VkglTestCase_008968_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008968_2 "rs.random.swizzle.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008968, VkglTestCase_008968_1, VkglTestCase_008968_2);

#define VkglTestCase_008969_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008969_2 "rs.random.swizzle.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008969, VkglTestCase_008969_1, VkglTestCase_008969_2);

#define VkglTestCase_008970_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008970_2 "rs.random.swizzle.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008970, VkglTestCase_008970_1, VkglTestCase_008970_2);

#define VkglTestCase_008971_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008971_2 "rs.random.swizzle.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008971, VkglTestCase_008971_1, VkglTestCase_008971_2);

#define VkglTestCase_008972_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008972_2 "rs.random.swizzle.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008972, VkglTestCase_008972_1, VkglTestCase_008972_2);

#define VkglTestCase_008973_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008973_2 "rs.random.swizzle.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008973, VkglTestCase_008973_1, VkglTestCase_008973_2);

#define VkglTestCase_008974_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008974_2 "rs.random.swizzle.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008974, VkglTestCase_008974_1, VkglTestCase_008974_2);

#define VkglTestCase_008975_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008975_2 "rs.random.swizzle.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008975, VkglTestCase_008975_1, VkglTestCase_008975_2);

#define VkglTestCase_008976_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008976_2 "rs.random.swizzle.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008976, VkglTestCase_008976_1, VkglTestCase_008976_2);

#define VkglTestCase_008977_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008977_2 "rs.random.swizzle.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008977, VkglTestCase_008977_1, VkglTestCase_008977_2);

#define VkglTestCase_008978_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008978_2 "rs.random.swizzle.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008978, VkglTestCase_008978_1, VkglTestCase_008978_2);

#define VkglTestCase_008979_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008979_2 "rs.random.swizzle.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008979, VkglTestCase_008979_1, VkglTestCase_008979_2);

#define VkglTestCase_008980_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008980_2 "rs.random.swizzle.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008980, VkglTestCase_008980_1, VkglTestCase_008980_2);

#define VkglTestCase_008981_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008981_2 "rs.random.swizzle.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008981, VkglTestCase_008981_1, VkglTestCase_008981_2);
