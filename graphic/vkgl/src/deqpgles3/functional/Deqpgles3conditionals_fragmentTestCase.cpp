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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020894_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020894_2 "random.conditionals.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020894, VkglTestCase_020894_1, VkglTestCase_020894_2);

#define VkglTestCase_020895_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020895_2 "random.conditionals.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020895, VkglTestCase_020895_1, VkglTestCase_020895_2);

#define VkglTestCase_020896_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020896_2 "random.conditionals.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020896, VkglTestCase_020896_1, VkglTestCase_020896_2);

#define VkglTestCase_020897_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020897_2 "random.conditionals.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020897, VkglTestCase_020897_1, VkglTestCase_020897_2);

#define VkglTestCase_020898_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020898_2 "random.conditionals.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020898, VkglTestCase_020898_1, VkglTestCase_020898_2);

#define VkglTestCase_020899_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020899_2 "random.conditionals.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020899, VkglTestCase_020899_1, VkglTestCase_020899_2);

#define VkglTestCase_020900_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020900_2 "random.conditionals.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020900, VkglTestCase_020900_1, VkglTestCase_020900_2);

#define VkglTestCase_020901_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020901_2 "random.conditionals.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020901, VkglTestCase_020901_1, VkglTestCase_020901_2);

#define VkglTestCase_020902_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020902_2 "random.conditionals.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020902, VkglTestCase_020902_1, VkglTestCase_020902_2);

#define VkglTestCase_020903_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020903_2 "random.conditionals.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020903, VkglTestCase_020903_1, VkglTestCase_020903_2);

#define VkglTestCase_020904_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020904_2 "random.conditionals.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020904, VkglTestCase_020904_1, VkglTestCase_020904_2);

#define VkglTestCase_020905_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020905_2 "random.conditionals.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020905, VkglTestCase_020905_1, VkglTestCase_020905_2);

#define VkglTestCase_020906_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020906_2 "random.conditionals.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020906, VkglTestCase_020906_1, VkglTestCase_020906_2);

#define VkglTestCase_020907_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020907_2 "random.conditionals.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020907, VkglTestCase_020907_1, VkglTestCase_020907_2);

#define VkglTestCase_020908_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020908_2 "random.conditionals.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020908, VkglTestCase_020908_1, VkglTestCase_020908_2);

#define VkglTestCase_020909_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020909_2 "random.conditionals.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020909, VkglTestCase_020909_1, VkglTestCase_020909_2);

#define VkglTestCase_020910_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020910_2 "random.conditionals.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020910, VkglTestCase_020910_1, VkglTestCase_020910_2);

#define VkglTestCase_020911_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020911_2 "random.conditionals.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020911, VkglTestCase_020911_1, VkglTestCase_020911_2);

#define VkglTestCase_020912_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020912_2 "random.conditionals.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020912, VkglTestCase_020912_1, VkglTestCase_020912_2);

#define VkglTestCase_020913_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020913_2 "random.conditionals.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020913, VkglTestCase_020913_1, VkglTestCase_020913_2);

#define VkglTestCase_020914_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020914_2 "random.conditionals.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020914, VkglTestCase_020914_1, VkglTestCase_020914_2);

#define VkglTestCase_020915_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020915_2 "random.conditionals.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020915, VkglTestCase_020915_1, VkglTestCase_020915_2);

#define VkglTestCase_020916_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020916_2 "random.conditionals.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020916, VkglTestCase_020916_1, VkglTestCase_020916_2);

#define VkglTestCase_020917_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020917_2 "random.conditionals.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020917, VkglTestCase_020917_1, VkglTestCase_020917_2);

#define VkglTestCase_020918_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020918_2 "random.conditionals.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020918, VkglTestCase_020918_1, VkglTestCase_020918_2);

#define VkglTestCase_020919_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020919_2 "random.conditionals.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020919, VkglTestCase_020919_1, VkglTestCase_020919_2);

#define VkglTestCase_020920_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020920_2 "random.conditionals.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020920, VkglTestCase_020920_1, VkglTestCase_020920_2);

#define VkglTestCase_020921_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020921_2 "random.conditionals.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020921, VkglTestCase_020921_1, VkglTestCase_020921_2);

#define VkglTestCase_020922_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020922_2 "random.conditionals.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020922, VkglTestCase_020922_1, VkglTestCase_020922_2);

#define VkglTestCase_020923_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020923_2 "random.conditionals.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020923, VkglTestCase_020923_1, VkglTestCase_020923_2);

#define VkglTestCase_020924_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020924_2 "random.conditionals.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020924, VkglTestCase_020924_1, VkglTestCase_020924_2);

#define VkglTestCase_020925_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020925_2 "random.conditionals.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020925, VkglTestCase_020925_1, VkglTestCase_020925_2);

#define VkglTestCase_020926_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020926_2 "random.conditionals.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020926, VkglTestCase_020926_1, VkglTestCase_020926_2);

#define VkglTestCase_020927_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020927_2 "random.conditionals.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020927, VkglTestCase_020927_1, VkglTestCase_020927_2);

#define VkglTestCase_020928_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020928_2 "random.conditionals.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020928, VkglTestCase_020928_1, VkglTestCase_020928_2);

#define VkglTestCase_020929_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020929_2 "random.conditionals.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020929, VkglTestCase_020929_1, VkglTestCase_020929_2);

#define VkglTestCase_020930_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020930_2 "random.conditionals.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020930, VkglTestCase_020930_1, VkglTestCase_020930_2);

#define VkglTestCase_020931_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020931_2 "random.conditionals.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020931, VkglTestCase_020931_1, VkglTestCase_020931_2);

#define VkglTestCase_020932_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020932_2 "random.conditionals.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020932, VkglTestCase_020932_1, VkglTestCase_020932_2);

#define VkglTestCase_020933_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020933_2 "random.conditionals.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020933, VkglTestCase_020933_1, VkglTestCase_020933_2);

#define VkglTestCase_020934_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020934_2 "random.conditionals.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020934, VkglTestCase_020934_1, VkglTestCase_020934_2);

#define VkglTestCase_020935_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020935_2 "random.conditionals.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020935, VkglTestCase_020935_1, VkglTestCase_020935_2);

#define VkglTestCase_020936_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020936_2 "random.conditionals.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020936, VkglTestCase_020936_1, VkglTestCase_020936_2);

#define VkglTestCase_020937_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020937_2 "random.conditionals.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020937, VkglTestCase_020937_1, VkglTestCase_020937_2);

#define VkglTestCase_020938_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020938_2 "random.conditionals.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020938, VkglTestCase_020938_1, VkglTestCase_020938_2);

#define VkglTestCase_020939_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020939_2 "random.conditionals.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020939, VkglTestCase_020939_1, VkglTestCase_020939_2);

#define VkglTestCase_020940_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020940_2 "random.conditionals.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020940, VkglTestCase_020940_1, VkglTestCase_020940_2);

#define VkglTestCase_020941_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020941_2 "random.conditionals.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020941, VkglTestCase_020941_1, VkglTestCase_020941_2);

#define VkglTestCase_020942_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020942_2 "random.conditionals.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020942, VkglTestCase_020942_1, VkglTestCase_020942_2);

#define VkglTestCase_020943_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020943_2 "random.conditionals.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020943, VkglTestCase_020943_1, VkglTestCase_020943_2);

#define VkglTestCase_020944_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020944_2 "random.conditionals.fragment.50"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020944, VkglTestCase_020944_1, VkglTestCase_020944_2);

#define VkglTestCase_020945_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020945_2 "random.conditionals.fragment.51"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020945, VkglTestCase_020945_1, VkglTestCase_020945_2);

#define VkglTestCase_020946_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020946_2 "random.conditionals.fragment.52"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020946, VkglTestCase_020946_1, VkglTestCase_020946_2);

#define VkglTestCase_020947_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020947_2 "random.conditionals.fragment.53"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020947, VkglTestCase_020947_1, VkglTestCase_020947_2);

#define VkglTestCase_020948_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020948_2 "random.conditionals.fragment.54"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020948, VkglTestCase_020948_1, VkglTestCase_020948_2);

#define VkglTestCase_020949_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020949_2 "random.conditionals.fragment.55"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020949, VkglTestCase_020949_1, VkglTestCase_020949_2);

#define VkglTestCase_020950_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020950_2 "random.conditionals.fragment.56"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020950, VkglTestCase_020950_1, VkglTestCase_020950_2);

#define VkglTestCase_020951_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020951_2 "random.conditionals.fragment.57"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020951, VkglTestCase_020951_1, VkglTestCase_020951_2);

#define VkglTestCase_020952_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020952_2 "random.conditionals.fragment.58"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020952, VkglTestCase_020952_1, VkglTestCase_020952_2);

#define VkglTestCase_020953_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020953_2 "random.conditionals.fragment.59"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020953, VkglTestCase_020953_1, VkglTestCase_020953_2);

#define VkglTestCase_020954_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020954_2 "random.conditionals.fragment.60"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020954, VkglTestCase_020954_1, VkglTestCase_020954_2);

#define VkglTestCase_020955_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020955_2 "random.conditionals.fragment.61"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020955, VkglTestCase_020955_1, VkglTestCase_020955_2);

#define VkglTestCase_020956_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020956_2 "random.conditionals.fragment.62"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020956, VkglTestCase_020956_1, VkglTestCase_020956_2);

#define VkglTestCase_020957_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020957_2 "random.conditionals.fragment.63"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020957, VkglTestCase_020957_1, VkglTestCase_020957_2);

#define VkglTestCase_020958_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020958_2 "random.conditionals.fragment.64"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020958, VkglTestCase_020958_1, VkglTestCase_020958_2);

#define VkglTestCase_020959_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020959_2 "random.conditionals.fragment.65"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020959, VkglTestCase_020959_1, VkglTestCase_020959_2);

#define VkglTestCase_020960_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020960_2 "random.conditionals.fragment.66"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020960, VkglTestCase_020960_1, VkglTestCase_020960_2);

#define VkglTestCase_020961_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020961_2 "random.conditionals.fragment.67"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020961, VkglTestCase_020961_1, VkglTestCase_020961_2);

#define VkglTestCase_020962_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020962_2 "random.conditionals.fragment.68"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020962, VkglTestCase_020962_1, VkglTestCase_020962_2);

#define VkglTestCase_020963_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020963_2 "random.conditionals.fragment.69"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020963, VkglTestCase_020963_1, VkglTestCase_020963_2);

#define VkglTestCase_020964_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020964_2 "random.conditionals.fragment.70"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020964, VkglTestCase_020964_1, VkglTestCase_020964_2);

#define VkglTestCase_020965_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020965_2 "random.conditionals.fragment.71"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020965, VkglTestCase_020965_1, VkglTestCase_020965_2);

#define VkglTestCase_020966_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020966_2 "random.conditionals.fragment.72"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020966, VkglTestCase_020966_1, VkglTestCase_020966_2);

#define VkglTestCase_020967_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020967_2 "random.conditionals.fragment.73"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020967, VkglTestCase_020967_1, VkglTestCase_020967_2);

#define VkglTestCase_020968_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020968_2 "random.conditionals.fragment.74"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020968, VkglTestCase_020968_1, VkglTestCase_020968_2);

#define VkglTestCase_020969_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020969_2 "random.conditionals.fragment.75"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020969, VkglTestCase_020969_1, VkglTestCase_020969_2);

#define VkglTestCase_020970_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020970_2 "random.conditionals.fragment.76"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020970, VkglTestCase_020970_1, VkglTestCase_020970_2);

#define VkglTestCase_020971_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020971_2 "random.conditionals.fragment.77"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020971, VkglTestCase_020971_1, VkglTestCase_020971_2);

#define VkglTestCase_020972_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020972_2 "random.conditionals.fragment.78"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020972, VkglTestCase_020972_1, VkglTestCase_020972_2);

#define VkglTestCase_020973_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020973_2 "random.conditionals.fragment.79"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020973, VkglTestCase_020973_1, VkglTestCase_020973_2);

#define VkglTestCase_020974_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020974_2 "random.conditionals.fragment.80"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020974, VkglTestCase_020974_1, VkglTestCase_020974_2);

#define VkglTestCase_020975_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020975_2 "random.conditionals.fragment.81"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020975, VkglTestCase_020975_1, VkglTestCase_020975_2);

#define VkglTestCase_020976_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020976_2 "random.conditionals.fragment.82"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020976, VkglTestCase_020976_1, VkglTestCase_020976_2);

#define VkglTestCase_020977_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020977_2 "random.conditionals.fragment.83"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020977, VkglTestCase_020977_1, VkglTestCase_020977_2);

#define VkglTestCase_020978_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020978_2 "random.conditionals.fragment.84"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020978, VkglTestCase_020978_1, VkglTestCase_020978_2);

#define VkglTestCase_020979_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020979_2 "random.conditionals.fragment.85"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020979, VkglTestCase_020979_1, VkglTestCase_020979_2);

#define VkglTestCase_020980_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020980_2 "random.conditionals.fragment.86"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020980, VkglTestCase_020980_1, VkglTestCase_020980_2);

#define VkglTestCase_020981_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020981_2 "random.conditionals.fragment.87"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020981, VkglTestCase_020981_1, VkglTestCase_020981_2);

#define VkglTestCase_020982_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020982_2 "random.conditionals.fragment.88"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020982, VkglTestCase_020982_1, VkglTestCase_020982_2);

#define VkglTestCase_020983_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020983_2 "random.conditionals.fragment.89"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020983, VkglTestCase_020983_1, VkglTestCase_020983_2);

#define VkglTestCase_020984_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020984_2 "random.conditionals.fragment.90"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020984, VkglTestCase_020984_1, VkglTestCase_020984_2);

#define VkglTestCase_020985_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020985_2 "random.conditionals.fragment.91"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020985, VkglTestCase_020985_1, VkglTestCase_020985_2);

#define VkglTestCase_020986_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020986_2 "random.conditionals.fragment.92"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020986, VkglTestCase_020986_1, VkglTestCase_020986_2);

#define VkglTestCase_020987_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020987_2 "random.conditionals.fragment.93"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020987, VkglTestCase_020987_1, VkglTestCase_020987_2);

#define VkglTestCase_020988_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020988_2 "random.conditionals.fragment.94"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020988, VkglTestCase_020988_1, VkglTestCase_020988_2);

#define VkglTestCase_020989_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020989_2 "random.conditionals.fragment.95"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020989, VkglTestCase_020989_1, VkglTestCase_020989_2);

#define VkglTestCase_020990_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020990_2 "random.conditionals.fragment.96"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020990, VkglTestCase_020990_1, VkglTestCase_020990_2);

#define VkglTestCase_020991_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020991_2 "random.conditionals.fragment.97"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020991, VkglTestCase_020991_1, VkglTestCase_020991_2);

#define VkglTestCase_020992_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020992_2 "random.conditionals.fragment.98"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020992, VkglTestCase_020992_1, VkglTestCase_020992_2);

#define VkglTestCase_020993_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_020993_2 "random.conditionals.fragment.99"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020993, VkglTestCase_020993_1, VkglTestCase_020993_2);
