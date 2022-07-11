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

#define VkglTestCase_008982_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008982_2 "rs.random.swizzle.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008982, VkglTestCase_008982_1, VkglTestCase_008982_2);

#define VkglTestCase_008983_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008983_2 "rs.random.swizzle.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008983, VkglTestCase_008983_1, VkglTestCase_008983_2);

#define VkglTestCase_008984_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008984_2 "rs.random.swizzle.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008984, VkglTestCase_008984_1, VkglTestCase_008984_2);

#define VkglTestCase_008985_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008985_2 "rs.random.swizzle.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008985, VkglTestCase_008985_1, VkglTestCase_008985_2);

#define VkglTestCase_008986_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008986_2 "rs.random.swizzle.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008986, VkglTestCase_008986_1, VkglTestCase_008986_2);

#define VkglTestCase_008987_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008987_2 "rs.random.swizzle.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008987, VkglTestCase_008987_1, VkglTestCase_008987_2);

#define VkglTestCase_008988_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008988_2 "rs.random.swizzle.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008988, VkglTestCase_008988_1, VkglTestCase_008988_2);

#define VkglTestCase_008989_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008989_2 "rs.random.swizzle.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008989, VkglTestCase_008989_1, VkglTestCase_008989_2);

#define VkglTestCase_008990_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008990_2 "rs.random.swizzle.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008990, VkglTestCase_008990_1, VkglTestCase_008990_2);

#define VkglTestCase_008991_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_008991_2 "rs.random.swizzle.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008991, VkglTestCase_008991_1, VkglTestCase_008991_2);

#define VkglTestCase_008992_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008992_2 "s.random.swizzle.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008992, VkglTestCase_008992_1, VkglTestCase_008992_2);

#define VkglTestCase_008993_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008993_2 "s.random.swizzle.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008993, VkglTestCase_008993_1, VkglTestCase_008993_2);

#define VkglTestCase_008994_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008994_2 "s.random.swizzle.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008994, VkglTestCase_008994_1, VkglTestCase_008994_2);

#define VkglTestCase_008995_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008995_2 "s.random.swizzle.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008995, VkglTestCase_008995_1, VkglTestCase_008995_2);

#define VkglTestCase_008996_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008996_2 "s.random.swizzle.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008996, VkglTestCase_008996_1, VkglTestCase_008996_2);

#define VkglTestCase_008997_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008997_2 "s.random.swizzle.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008997, VkglTestCase_008997_1, VkglTestCase_008997_2);

#define VkglTestCase_008998_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008998_2 "s.random.swizzle.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008998, VkglTestCase_008998_1, VkglTestCase_008998_2);

#define VkglTestCase_008999_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_008999_2 "s.random.swizzle.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008999, VkglTestCase_008999_1, VkglTestCase_008999_2);

#define VkglTestCase_009000_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009000_2 "s.random.swizzle.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009000, VkglTestCase_009000_1, VkglTestCase_009000_2);

#define VkglTestCase_009001_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009001_2 "s.random.swizzle.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009001, VkglTestCase_009001_1, VkglTestCase_009001_2);

#define VkglTestCase_009002_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009002_2 "s.random.swizzle.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009002, VkglTestCase_009002_1, VkglTestCase_009002_2);

#define VkglTestCase_009003_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009003_2 "s.random.swizzle.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009003, VkglTestCase_009003_1, VkglTestCase_009003_2);

#define VkglTestCase_009004_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009004_2 "s.random.swizzle.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009004, VkglTestCase_009004_1, VkglTestCase_009004_2);

#define VkglTestCase_009005_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009005_2 "s.random.swizzle.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009005, VkglTestCase_009005_1, VkglTestCase_009005_2);

#define VkglTestCase_009006_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009006_2 "s.random.swizzle.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009006, VkglTestCase_009006_1, VkglTestCase_009006_2);

#define VkglTestCase_009007_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009007_2 "s.random.swizzle.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009007, VkglTestCase_009007_1, VkglTestCase_009007_2);

#define VkglTestCase_009008_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009008_2 "s.random.swizzle.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009008, VkglTestCase_009008_1, VkglTestCase_009008_2);

#define VkglTestCase_009009_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009009_2 "s.random.swizzle.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009009, VkglTestCase_009009_1, VkglTestCase_009009_2);

#define VkglTestCase_009010_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009010_2 "s.random.swizzle.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009010, VkglTestCase_009010_1, VkglTestCase_009010_2);

#define VkglTestCase_009011_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009011_2 "s.random.swizzle.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009011, VkglTestCase_009011_1, VkglTestCase_009011_2);

#define VkglTestCase_009012_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009012_2 "s.random.swizzle.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009012, VkglTestCase_009012_1, VkglTestCase_009012_2);

#define VkglTestCase_009013_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009013_2 "s.random.swizzle.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009013, VkglTestCase_009013_1, VkglTestCase_009013_2);

#define VkglTestCase_009014_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009014_2 "s.random.swizzle.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009014, VkglTestCase_009014_1, VkglTestCase_009014_2);

#define VkglTestCase_009015_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009015_2 "s.random.swizzle.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009015, VkglTestCase_009015_1, VkglTestCase_009015_2);

#define VkglTestCase_009016_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009016_2 "s.random.swizzle.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009016, VkglTestCase_009016_1, VkglTestCase_009016_2);

#define VkglTestCase_009017_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009017_2 "s.random.swizzle.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009017, VkglTestCase_009017_1, VkglTestCase_009017_2);

#define VkglTestCase_009018_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009018_2 "s.random.swizzle.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009018, VkglTestCase_009018_1, VkglTestCase_009018_2);

#define VkglTestCase_009019_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009019_2 "s.random.swizzle.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009019, VkglTestCase_009019_1, VkglTestCase_009019_2);

#define VkglTestCase_009020_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009020_2 "s.random.swizzle.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009020, VkglTestCase_009020_1, VkglTestCase_009020_2);

#define VkglTestCase_009021_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009021_2 "s.random.swizzle.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009021, VkglTestCase_009021_1, VkglTestCase_009021_2);

#define VkglTestCase_009022_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009022_2 "s.random.swizzle.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009022, VkglTestCase_009022_1, VkglTestCase_009022_2);

#define VkglTestCase_009023_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009023_2 "s.random.swizzle.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009023, VkglTestCase_009023_1, VkglTestCase_009023_2);

#define VkglTestCase_009024_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009024_2 "s.random.swizzle.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009024, VkglTestCase_009024_1, VkglTestCase_009024_2);

#define VkglTestCase_009025_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009025_2 "s.random.swizzle.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009025, VkglTestCase_009025_1, VkglTestCase_009025_2);

#define VkglTestCase_009026_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009026_2 "s.random.swizzle.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009026, VkglTestCase_009026_1, VkglTestCase_009026_2);

#define VkglTestCase_009027_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009027_2 "s.random.swizzle.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009027, VkglTestCase_009027_1, VkglTestCase_009027_2);

#define VkglTestCase_009028_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009028_2 "s.random.swizzle.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009028, VkglTestCase_009028_1, VkglTestCase_009028_2);

#define VkglTestCase_009029_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009029_2 "s.random.swizzle.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009029, VkglTestCase_009029_1, VkglTestCase_009029_2);

#define VkglTestCase_009030_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009030_2 "s.random.swizzle.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009030, VkglTestCase_009030_1, VkglTestCase_009030_2);

#define VkglTestCase_009031_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009031_2 "s.random.swizzle.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_009031, VkglTestCase_009031_1, VkglTestCase_009031_2);
