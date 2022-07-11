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
#include "../ActsDeqpgles20010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009882_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009882_2 "rs.random.texture.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009882, VkglTestCase_009882_1, VkglTestCase_009882_2);

#define VkglTestCase_009883_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009883_2 "rs.random.texture.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009883, VkglTestCase_009883_1, VkglTestCase_009883_2);

#define VkglTestCase_009884_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009884_2 "rs.random.texture.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009884, VkglTestCase_009884_1, VkglTestCase_009884_2);

#define VkglTestCase_009885_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009885_2 "rs.random.texture.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009885, VkglTestCase_009885_1, VkglTestCase_009885_2);

#define VkglTestCase_009886_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009886_2 "rs.random.texture.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009886, VkglTestCase_009886_1, VkglTestCase_009886_2);

#define VkglTestCase_009887_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009887_2 "rs.random.texture.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009887, VkglTestCase_009887_1, VkglTestCase_009887_2);

#define VkglTestCase_009888_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009888_2 "rs.random.texture.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009888, VkglTestCase_009888_1, VkglTestCase_009888_2);

#define VkglTestCase_009889_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009889_2 "rs.random.texture.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009889, VkglTestCase_009889_1, VkglTestCase_009889_2);

#define VkglTestCase_009890_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009890_2 "rs.random.texture.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009890, VkglTestCase_009890_1, VkglTestCase_009890_2);

#define VkglTestCase_009891_1 "dEQP-GLES2.functional.shade"
#define VkglTestCase_009891_2 "rs.random.texture.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009891, VkglTestCase_009891_1, VkglTestCase_009891_2);

#define VkglTestCase_009892_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009892_2 "s.random.texture.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009892, VkglTestCase_009892_1, VkglTestCase_009892_2);

#define VkglTestCase_009893_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009893_2 "s.random.texture.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009893, VkglTestCase_009893_1, VkglTestCase_009893_2);

#define VkglTestCase_009894_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009894_2 "s.random.texture.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009894, VkglTestCase_009894_1, VkglTestCase_009894_2);

#define VkglTestCase_009895_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009895_2 "s.random.texture.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009895, VkglTestCase_009895_1, VkglTestCase_009895_2);

#define VkglTestCase_009896_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009896_2 "s.random.texture.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009896, VkglTestCase_009896_1, VkglTestCase_009896_2);

#define VkglTestCase_009897_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009897_2 "s.random.texture.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009897, VkglTestCase_009897_1, VkglTestCase_009897_2);

#define VkglTestCase_009898_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009898_2 "s.random.texture.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009898, VkglTestCase_009898_1, VkglTestCase_009898_2);

#define VkglTestCase_009899_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009899_2 "s.random.texture.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009899, VkglTestCase_009899_1, VkglTestCase_009899_2);

#define VkglTestCase_009900_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009900_2 "s.random.texture.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009900, VkglTestCase_009900_1, VkglTestCase_009900_2);

#define VkglTestCase_009901_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009901_2 "s.random.texture.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009901, VkglTestCase_009901_1, VkglTestCase_009901_2);

#define VkglTestCase_009902_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009902_2 "s.random.texture.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009902, VkglTestCase_009902_1, VkglTestCase_009902_2);

#define VkglTestCase_009903_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009903_2 "s.random.texture.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009903, VkglTestCase_009903_1, VkglTestCase_009903_2);

#define VkglTestCase_009904_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009904_2 "s.random.texture.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009904, VkglTestCase_009904_1, VkglTestCase_009904_2);

#define VkglTestCase_009905_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009905_2 "s.random.texture.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009905, VkglTestCase_009905_1, VkglTestCase_009905_2);

#define VkglTestCase_009906_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009906_2 "s.random.texture.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009906, VkglTestCase_009906_1, VkglTestCase_009906_2);

#define VkglTestCase_009907_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009907_2 "s.random.texture.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009907, VkglTestCase_009907_1, VkglTestCase_009907_2);

#define VkglTestCase_009908_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009908_2 "s.random.texture.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009908, VkglTestCase_009908_1, VkglTestCase_009908_2);

#define VkglTestCase_009909_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009909_2 "s.random.texture.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009909, VkglTestCase_009909_1, VkglTestCase_009909_2);

#define VkglTestCase_009910_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009910_2 "s.random.texture.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009910, VkglTestCase_009910_1, VkglTestCase_009910_2);

#define VkglTestCase_009911_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009911_2 "s.random.texture.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009911, VkglTestCase_009911_1, VkglTestCase_009911_2);

#define VkglTestCase_009912_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009912_2 "s.random.texture.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009912, VkglTestCase_009912_1, VkglTestCase_009912_2);

#define VkglTestCase_009913_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009913_2 "s.random.texture.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009913, VkglTestCase_009913_1, VkglTestCase_009913_2);

#define VkglTestCase_009914_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009914_2 "s.random.texture.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009914, VkglTestCase_009914_1, VkglTestCase_009914_2);

#define VkglTestCase_009915_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009915_2 "s.random.texture.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009915, VkglTestCase_009915_1, VkglTestCase_009915_2);

#define VkglTestCase_009916_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009916_2 "s.random.texture.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009916, VkglTestCase_009916_1, VkglTestCase_009916_2);

#define VkglTestCase_009917_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009917_2 "s.random.texture.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009917, VkglTestCase_009917_1, VkglTestCase_009917_2);

#define VkglTestCase_009918_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009918_2 "s.random.texture.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009918, VkglTestCase_009918_1, VkglTestCase_009918_2);

#define VkglTestCase_009919_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009919_2 "s.random.texture.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009919, VkglTestCase_009919_1, VkglTestCase_009919_2);

#define VkglTestCase_009920_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009920_2 "s.random.texture.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009920, VkglTestCase_009920_1, VkglTestCase_009920_2);

#define VkglTestCase_009921_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009921_2 "s.random.texture.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009921, VkglTestCase_009921_1, VkglTestCase_009921_2);

#define VkglTestCase_009922_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009922_2 "s.random.texture.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009922, VkglTestCase_009922_1, VkglTestCase_009922_2);

#define VkglTestCase_009923_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009923_2 "s.random.texture.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009923, VkglTestCase_009923_1, VkglTestCase_009923_2);

#define VkglTestCase_009924_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009924_2 "s.random.texture.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009924, VkglTestCase_009924_1, VkglTestCase_009924_2);

#define VkglTestCase_009925_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009925_2 "s.random.texture.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009925, VkglTestCase_009925_1, VkglTestCase_009925_2);

#define VkglTestCase_009926_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009926_2 "s.random.texture.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009926, VkglTestCase_009926_1, VkglTestCase_009926_2);

#define VkglTestCase_009927_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009927_2 "s.random.texture.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009927, VkglTestCase_009927_1, VkglTestCase_009927_2);

#define VkglTestCase_009928_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009928_2 "s.random.texture.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009928, VkglTestCase_009928_1, VkglTestCase_009928_2);

#define VkglTestCase_009929_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009929_2 "s.random.texture.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009929, VkglTestCase_009929_1, VkglTestCase_009929_2);

#define VkglTestCase_009930_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009930_2 "s.random.texture.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009930, VkglTestCase_009930_1, VkglTestCase_009930_2);

#define VkglTestCase_009931_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009931_2 "s.random.texture.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009931, VkglTestCase_009931_1, VkglTestCase_009931_2);

#define VkglTestCase_009932_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009932_2 "s.random.texture.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009932, VkglTestCase_009932_1, VkglTestCase_009932_2);

#define VkglTestCase_009933_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009933_2 "s.random.texture.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009933, VkglTestCase_009933_1, VkglTestCase_009933_2);

#define VkglTestCase_009934_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009934_2 "s.random.texture.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009934, VkglTestCase_009934_1, VkglTestCase_009934_2);

#define VkglTestCase_009935_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009935_2 "s.random.texture.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009935, VkglTestCase_009935_1, VkglTestCase_009935_2);

#define VkglTestCase_009936_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009936_2 "s.random.texture.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009936, VkglTestCase_009936_1, VkglTestCase_009936_2);

#define VkglTestCase_009937_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009937_2 "s.random.texture.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009937, VkglTestCase_009937_1, VkglTestCase_009937_2);

#define VkglTestCase_009938_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009938_2 "s.random.texture.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009938, VkglTestCase_009938_1, VkglTestCase_009938_2);

#define VkglTestCase_009939_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009939_2 "s.random.texture.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009939, VkglTestCase_009939_1, VkglTestCase_009939_2);

#define VkglTestCase_009940_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009940_2 "s.random.texture.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009940, VkglTestCase_009940_1, VkglTestCase_009940_2);

#define VkglTestCase_009941_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009941_2 "s.random.texture.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009941, VkglTestCase_009941_1, VkglTestCase_009941_2);

#define VkglTestCase_009942_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009942_2 "s.random.texture.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009942, VkglTestCase_009942_1, VkglTestCase_009942_2);

#define VkglTestCase_009943_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009943_2 "s.random.texture.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009943, VkglTestCase_009943_1, VkglTestCase_009943_2);

#define VkglTestCase_009944_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009944_2 "s.random.texture.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009944, VkglTestCase_009944_1, VkglTestCase_009944_2);

#define VkglTestCase_009945_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009945_2 "s.random.texture.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009945, VkglTestCase_009945_1, VkglTestCase_009945_2);

#define VkglTestCase_009946_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009946_2 "s.random.texture.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009946, VkglTestCase_009946_1, VkglTestCase_009946_2);

#define VkglTestCase_009947_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009947_2 "s.random.texture.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009947, VkglTestCase_009947_1, VkglTestCase_009947_2);

#define VkglTestCase_009948_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009948_2 "s.random.texture.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009948, VkglTestCase_009948_1, VkglTestCase_009948_2);

#define VkglTestCase_009949_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009949_2 "s.random.texture.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009949, VkglTestCase_009949_1, VkglTestCase_009949_2);

#define VkglTestCase_009950_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009950_2 "s.random.texture.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009950, VkglTestCase_009950_1, VkglTestCase_009950_2);

#define VkglTestCase_009951_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009951_2 "s.random.texture.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009951, VkglTestCase_009951_1, VkglTestCase_009951_2);

#define VkglTestCase_009952_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009952_2 "s.random.texture.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009952, VkglTestCase_009952_1, VkglTestCase_009952_2);

#define VkglTestCase_009953_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009953_2 "s.random.texture.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009953, VkglTestCase_009953_1, VkglTestCase_009953_2);

#define VkglTestCase_009954_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009954_2 "s.random.texture.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009954, VkglTestCase_009954_1, VkglTestCase_009954_2);

#define VkglTestCase_009955_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009955_2 "s.random.texture.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009955, VkglTestCase_009955_1, VkglTestCase_009955_2);

#define VkglTestCase_009956_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009956_2 "s.random.texture.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009956, VkglTestCase_009956_1, VkglTestCase_009956_2);

#define VkglTestCase_009957_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009957_2 "s.random.texture.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009957, VkglTestCase_009957_1, VkglTestCase_009957_2);

#define VkglTestCase_009958_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009958_2 "s.random.texture.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009958, VkglTestCase_009958_1, VkglTestCase_009958_2);

#define VkglTestCase_009959_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009959_2 "s.random.texture.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009959, VkglTestCase_009959_1, VkglTestCase_009959_2);

#define VkglTestCase_009960_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009960_2 "s.random.texture.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009960, VkglTestCase_009960_1, VkglTestCase_009960_2);

#define VkglTestCase_009961_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009961_2 "s.random.texture.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009961, VkglTestCase_009961_1, VkglTestCase_009961_2);

#define VkglTestCase_009962_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009962_2 "s.random.texture.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009962, VkglTestCase_009962_1, VkglTestCase_009962_2);

#define VkglTestCase_009963_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009963_2 "s.random.texture.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009963, VkglTestCase_009963_1, VkglTestCase_009963_2);

#define VkglTestCase_009964_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009964_2 "s.random.texture.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009964, VkglTestCase_009964_1, VkglTestCase_009964_2);

#define VkglTestCase_009965_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009965_2 "s.random.texture.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009965, VkglTestCase_009965_1, VkglTestCase_009965_2);

#define VkglTestCase_009966_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009966_2 "s.random.texture.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009966, VkglTestCase_009966_1, VkglTestCase_009966_2);

#define VkglTestCase_009967_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009967_2 "s.random.texture.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009967, VkglTestCase_009967_1, VkglTestCase_009967_2);

#define VkglTestCase_009968_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009968_2 "s.random.texture.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009968, VkglTestCase_009968_1, VkglTestCase_009968_2);

#define VkglTestCase_009969_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009969_2 "s.random.texture.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009969, VkglTestCase_009969_1, VkglTestCase_009969_2);

#define VkglTestCase_009970_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009970_2 "s.random.texture.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009970, VkglTestCase_009970_1, VkglTestCase_009970_2);

#define VkglTestCase_009971_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009971_2 "s.random.texture.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009971, VkglTestCase_009971_1, VkglTestCase_009971_2);

#define VkglTestCase_009972_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009972_2 "s.random.texture.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009972, VkglTestCase_009972_1, VkglTestCase_009972_2);

#define VkglTestCase_009973_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009973_2 "s.random.texture.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009973, VkglTestCase_009973_1, VkglTestCase_009973_2);

#define VkglTestCase_009974_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009974_2 "s.random.texture.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009974, VkglTestCase_009974_1, VkglTestCase_009974_2);

#define VkglTestCase_009975_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009975_2 "s.random.texture.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009975, VkglTestCase_009975_1, VkglTestCase_009975_2);

#define VkglTestCase_009976_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009976_2 "s.random.texture.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009976, VkglTestCase_009976_1, VkglTestCase_009976_2);

#define VkglTestCase_009977_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009977_2 "s.random.texture.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009977, VkglTestCase_009977_1, VkglTestCase_009977_2);

#define VkglTestCase_009978_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009978_2 "s.random.texture.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009978, VkglTestCase_009978_1, VkglTestCase_009978_2);

#define VkglTestCase_009979_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009979_2 "s.random.texture.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009979, VkglTestCase_009979_1, VkglTestCase_009979_2);

#define VkglTestCase_009980_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009980_2 "s.random.texture.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009980, VkglTestCase_009980_1, VkglTestCase_009980_2);

#define VkglTestCase_009981_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009981_2 "s.random.texture.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009981, VkglTestCase_009981_1, VkglTestCase_009981_2);

#define VkglTestCase_009982_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009982_2 "s.random.texture.fragment.100"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009982, VkglTestCase_009982_1, VkglTestCase_009982_2);

#define VkglTestCase_009983_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009983_2 "s.random.texture.fragment.101"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009983, VkglTestCase_009983_1, VkglTestCase_009983_2);

#define VkglTestCase_009984_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009984_2 "s.random.texture.fragment.102"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009984, VkglTestCase_009984_1, VkglTestCase_009984_2);

#define VkglTestCase_009985_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009985_2 "s.random.texture.fragment.103"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009985, VkglTestCase_009985_1, VkglTestCase_009985_2);

#define VkglTestCase_009986_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009986_2 "s.random.texture.fragment.104"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009986, VkglTestCase_009986_1, VkglTestCase_009986_2);

#define VkglTestCase_009987_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009987_2 "s.random.texture.fragment.105"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009987, VkglTestCase_009987_1, VkglTestCase_009987_2);

#define VkglTestCase_009988_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009988_2 "s.random.texture.fragment.106"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009988, VkglTestCase_009988_1, VkglTestCase_009988_2);

#define VkglTestCase_009989_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009989_2 "s.random.texture.fragment.107"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009989, VkglTestCase_009989_1, VkglTestCase_009989_2);

#define VkglTestCase_009990_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009990_2 "s.random.texture.fragment.108"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009990, VkglTestCase_009990_1, VkglTestCase_009990_2);

#define VkglTestCase_009991_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009991_2 "s.random.texture.fragment.109"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009991, VkglTestCase_009991_1, VkglTestCase_009991_2);

#define VkglTestCase_009992_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009992_2 "s.random.texture.fragment.110"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009992, VkglTestCase_009992_1, VkglTestCase_009992_2);

#define VkglTestCase_009993_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009993_2 "s.random.texture.fragment.111"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009993, VkglTestCase_009993_1, VkglTestCase_009993_2);

#define VkglTestCase_009994_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009994_2 "s.random.texture.fragment.112"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009994, VkglTestCase_009994_1, VkglTestCase_009994_2);

#define VkglTestCase_009995_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009995_2 "s.random.texture.fragment.113"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009995, VkglTestCase_009995_1, VkglTestCase_009995_2);

#define VkglTestCase_009996_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009996_2 "s.random.texture.fragment.114"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009996, VkglTestCase_009996_1, VkglTestCase_009996_2);

#define VkglTestCase_009997_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009997_2 "s.random.texture.fragment.115"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009997, VkglTestCase_009997_1, VkglTestCase_009997_2);

#define VkglTestCase_009998_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009998_2 "s.random.texture.fragment.116"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009998, VkglTestCase_009998_1, VkglTestCase_009998_2);

#define VkglTestCase_009999_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_009999_2 "s.random.texture.fragment.117"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_009999, VkglTestCase_009999_1, VkglTestCase_009999_2);

#define VkglTestCase_010000_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010000_2 "s.random.texture.fragment.118"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010000, VkglTestCase_010000_1, VkglTestCase_010000_2);

#define VkglTestCase_010001_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010001_2 "s.random.texture.fragment.119"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010001, VkglTestCase_010001_1, VkglTestCase_010001_2);

#define VkglTestCase_010002_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010002_2 "s.random.texture.fragment.120"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010002, VkglTestCase_010002_1, VkglTestCase_010002_2);

#define VkglTestCase_010003_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010003_2 "s.random.texture.fragment.121"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010003, VkglTestCase_010003_1, VkglTestCase_010003_2);

#define VkglTestCase_010004_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010004_2 "s.random.texture.fragment.122"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010004, VkglTestCase_010004_1, VkglTestCase_010004_2);

#define VkglTestCase_010005_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010005_2 "s.random.texture.fragment.123"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010005, VkglTestCase_010005_1, VkglTestCase_010005_2);

#define VkglTestCase_010006_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010006_2 "s.random.texture.fragment.124"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010006, VkglTestCase_010006_1, VkglTestCase_010006_2);

#define VkglTestCase_010007_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010007_2 "s.random.texture.fragment.125"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010007, VkglTestCase_010007_1, VkglTestCase_010007_2);

#define VkglTestCase_010008_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010008_2 "s.random.texture.fragment.126"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010008, VkglTestCase_010008_1, VkglTestCase_010008_2);

#define VkglTestCase_010009_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010009_2 "s.random.texture.fragment.127"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010009, VkglTestCase_010009_1, VkglTestCase_010009_2);

#define VkglTestCase_010010_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010010_2 "s.random.texture.fragment.128"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010010, VkglTestCase_010010_1, VkglTestCase_010010_2);

#define VkglTestCase_010011_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010011_2 "s.random.texture.fragment.129"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010011, VkglTestCase_010011_1, VkglTestCase_010011_2);

#define VkglTestCase_010012_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010012_2 "s.random.texture.fragment.130"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010012, VkglTestCase_010012_1, VkglTestCase_010012_2);

#define VkglTestCase_010013_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010013_2 "s.random.texture.fragment.131"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010013, VkglTestCase_010013_1, VkglTestCase_010013_2);

#define VkglTestCase_010014_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010014_2 "s.random.texture.fragment.132"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010014, VkglTestCase_010014_1, VkglTestCase_010014_2);

#define VkglTestCase_010015_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010015_2 "s.random.texture.fragment.133"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010015, VkglTestCase_010015_1, VkglTestCase_010015_2);

#define VkglTestCase_010016_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010016_2 "s.random.texture.fragment.134"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010016, VkglTestCase_010016_1, VkglTestCase_010016_2);

#define VkglTestCase_010017_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010017_2 "s.random.texture.fragment.135"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010017, VkglTestCase_010017_1, VkglTestCase_010017_2);

#define VkglTestCase_010018_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010018_2 "s.random.texture.fragment.136"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010018, VkglTestCase_010018_1, VkglTestCase_010018_2);

#define VkglTestCase_010019_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010019_2 "s.random.texture.fragment.137"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010019, VkglTestCase_010019_1, VkglTestCase_010019_2);

#define VkglTestCase_010020_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010020_2 "s.random.texture.fragment.138"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010020, VkglTestCase_010020_1, VkglTestCase_010020_2);

#define VkglTestCase_010021_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010021_2 "s.random.texture.fragment.139"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010021, VkglTestCase_010021_1, VkglTestCase_010021_2);

#define VkglTestCase_010022_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010022_2 "s.random.texture.fragment.140"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010022, VkglTestCase_010022_1, VkglTestCase_010022_2);

#define VkglTestCase_010023_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010023_2 "s.random.texture.fragment.141"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010023, VkglTestCase_010023_1, VkglTestCase_010023_2);

#define VkglTestCase_010024_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010024_2 "s.random.texture.fragment.142"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010024, VkglTestCase_010024_1, VkglTestCase_010024_2);

#define VkglTestCase_010025_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010025_2 "s.random.texture.fragment.143"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010025, VkglTestCase_010025_1, VkglTestCase_010025_2);

#define VkglTestCase_010026_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010026_2 "s.random.texture.fragment.144"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010026, VkglTestCase_010026_1, VkglTestCase_010026_2);

#define VkglTestCase_010027_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010027_2 "s.random.texture.fragment.145"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010027, VkglTestCase_010027_1, VkglTestCase_010027_2);

#define VkglTestCase_010028_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010028_2 "s.random.texture.fragment.146"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010028, VkglTestCase_010028_1, VkglTestCase_010028_2);

#define VkglTestCase_010029_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010029_2 "s.random.texture.fragment.147"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010029, VkglTestCase_010029_1, VkglTestCase_010029_2);

#define VkglTestCase_010030_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010030_2 "s.random.texture.fragment.148"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010030, VkglTestCase_010030_1, VkglTestCase_010030_2);

#define VkglTestCase_010031_1 "dEQP-GLES2.functional.shader"
#define VkglTestCase_010031_2 "s.random.texture.fragment.149"
SHRINK_HWTEST_F(ActsDeqpgles20010TestSuite, TestCase_010031, VkglTestCase_010031_1, VkglTestCase_010031_2);
