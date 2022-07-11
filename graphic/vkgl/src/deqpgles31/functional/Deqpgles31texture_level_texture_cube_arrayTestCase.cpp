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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015895_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015895_2 "e_level.texture_cube_array.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015895, VkglTestCase_015895_1, VkglTestCase_015895_2);

#define VkglTestCase_015896_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015896_2 "re_level.texture_cube_array.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015896, VkglTestCase_015896_1, VkglTestCase_015896_2);

#define VkglTestCase_015897_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015897_2 "texture_cube_array.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015897, VkglTestCase_015897_1, VkglTestCase_015897_2);

#define VkglTestCase_015898_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015898_2 ".texture_cube_array.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015898, VkglTestCase_015898_1, VkglTestCase_015898_2);

#define VkglTestCase_015899_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015899_2 "re_level.texture_cube_array.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015899, VkglTestCase_015899_1, VkglTestCase_015899_2);

#define VkglTestCase_015900_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015900_2 "ure_level.texture_cube_array.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015900, VkglTestCase_015900_1, VkglTestCase_015900_2);

#define VkglTestCase_015901_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015901_2 "e_level.texture_cube_array.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015901, VkglTestCase_015901_1, VkglTestCase_015901_2);

#define VkglTestCase_015902_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015902_2 "re_level.texture_cube_array.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015902, VkglTestCase_015902_1, VkglTestCase_015902_2);

#define VkglTestCase_015903_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015903_2 "re_level.texture_cube_array.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015903, VkglTestCase_015903_1, VkglTestCase_015903_2);

#define VkglTestCase_015904_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015904_2 "ure_level.texture_cube_array.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015904, VkglTestCase_015904_1, VkglTestCase_015904_2);

#define VkglTestCase_015905_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015905_2 "vel.texture_cube_array.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015905, VkglTestCase_015905_1, VkglTestCase_015905_2);

#define VkglTestCase_015906_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015906_2 "evel.texture_cube_array.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015906, VkglTestCase_015906_1, VkglTestCase_015906_2);

#define VkglTestCase_015907_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015907_2 "_level.texture_cube_array.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015907, VkglTestCase_015907_1, VkglTestCase_015907_2);

#define VkglTestCase_015908_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015908_2 "e_level.texture_cube_array.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015908, VkglTestCase_015908_1, VkglTestCase_015908_2);

#define VkglTestCase_015909_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015909_2 "level.texture_cube_array.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015909, VkglTestCase_015909_1, VkglTestCase_015909_2);

#define VkglTestCase_015910_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015910_2 "_level.texture_cube_array.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015910, VkglTestCase_015910_1, VkglTestCase_015910_2);

#define VkglTestCase_015911_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015911_2 "_level.texture_cube_array.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015911, VkglTestCase_015911_1, VkglTestCase_015911_2);

#define VkglTestCase_015912_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015912_2 "e_level.texture_cube_array.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015912, VkglTestCase_015912_1, VkglTestCase_015912_2);

#define VkglTestCase_015913_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015913_2 "level.texture_cube_array.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015913, VkglTestCase_015913_1, VkglTestCase_015913_2);

#define VkglTestCase_015914_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015914_2 "_level.texture_cube_array.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015914, VkglTestCase_015914_1, VkglTestCase_015914_2);

#define VkglTestCase_015915_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015915_2 "level.texture_cube_array.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015915, VkglTestCase_015915_1, VkglTestCase_015915_2);

#define VkglTestCase_015916_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015916_2 "_level.texture_cube_array.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015916, VkglTestCase_015916_1, VkglTestCase_015916_2);

#define VkglTestCase_015917_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015917_2 "evel.texture_cube_array.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015917, VkglTestCase_015917_1, VkglTestCase_015917_2);

#define VkglTestCase_015918_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015918_2 "level.texture_cube_array.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015918, VkglTestCase_015918_1, VkglTestCase_015918_2);

#define VkglTestCase_015919_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015919_2 "level.texture_cube_array.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015919, VkglTestCase_015919_1, VkglTestCase_015919_2);

#define VkglTestCase_015920_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015920_2 "_level.texture_cube_array.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015920, VkglTestCase_015920_1, VkglTestCase_015920_2);

#define VkglTestCase_015921_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015921_2 "_level.texture_cube_array.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015921, VkglTestCase_015921_1, VkglTestCase_015921_2);

#define VkglTestCase_015922_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015922_2 "e_level.texture_cube_array.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015922, VkglTestCase_015922_1, VkglTestCase_015922_2);

#define VkglTestCase_015923_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015923_2 "level.texture_cube_array.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015923, VkglTestCase_015923_1, VkglTestCase_015923_2);

#define VkglTestCase_015924_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015924_2 "_level.texture_cube_array.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015924, VkglTestCase_015924_1, VkglTestCase_015924_2);

#define VkglTestCase_015925_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015925_2 "_level.texture_cube_array.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015925, VkglTestCase_015925_1, VkglTestCase_015925_2);

#define VkglTestCase_015926_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015926_2 "e_level.texture_cube_array.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015926, VkglTestCase_015926_1, VkglTestCase_015926_2);

#define VkglTestCase_015927_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015927_2 "level.texture_cube_array.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015927, VkglTestCase_015927_1, VkglTestCase_015927_2);

#define VkglTestCase_015928_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015928_2 "_level.texture_cube_array.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015928, VkglTestCase_015928_1, VkglTestCase_015928_2);

#define VkglTestCase_015929_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015929_2 "level.texture_cube_array.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015929, VkglTestCase_015929_1, VkglTestCase_015929_2);

#define VkglTestCase_015930_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015930_2 "_level.texture_cube_array.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015930, VkglTestCase_015930_1, VkglTestCase_015930_2);

#define VkglTestCase_015931_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015931_2 "level.texture_cube_array.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015931, VkglTestCase_015931_1, VkglTestCase_015931_2);

#define VkglTestCase_015932_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015932_2 "_level.texture_cube_array.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015932, VkglTestCase_015932_1, VkglTestCase_015932_2);

#define VkglTestCase_015933_1 "dEQP-GLES31.functional.state_query.texture_level.t"
#define VkglTestCase_015933_2 "exture_cube_array.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015933, VkglTestCase_015933_1, VkglTestCase_015933_2);

#define VkglTestCase_015934_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015934_2 "texture_cube_array.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015934, VkglTestCase_015934_1, VkglTestCase_015934_2);

#define VkglTestCase_015935_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015935_2 "evel.texture_cube_array.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015935, VkglTestCase_015935_1, VkglTestCase_015935_2);

#define VkglTestCase_015936_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015936_2 "level.texture_cube_array.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015936, VkglTestCase_015936_1, VkglTestCase_015936_2);

#define VkglTestCase_015937_1 "dEQP-GLES31.functional.state_query.texture_"
#define VkglTestCase_015937_2 "level.texture_cube_array.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015937, VkglTestCase_015937_1, VkglTestCase_015937_2);

#define VkglTestCase_015938_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015938_2 "_level.texture_cube_array.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015938, VkglTestCase_015938_1, VkglTestCase_015938_2);
