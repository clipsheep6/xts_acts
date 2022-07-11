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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001180_1 "KHR-GLES32.core.compressed"
#define VkglTestCase_001180_2 "_format.api.invalid_target"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "KHR-GLES32.core.compressed_for"
#define VkglTestCase_001181_2 "mat.api.invalid_width_or_height"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);

#define VkglTestCase_001182_1 "KHR-GLES32.core.compressed_format"
#define VkglTestCase_001182_2 ".api.invalid_width_or_height_array"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "KHR-GLES32.core.compressed_forma"
#define VkglTestCase_001183_2 "t.api.invalid_size_value_negative"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "KHR-GLES32.core.compressed_for"
#define VkglTestCase_001184_2 "mat.api.invalid_border_nonzero"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);

#define VkglTestCase_001185_1 "KHR-GLES32.core.compressed_format"
#define VkglTestCase_001185_2 ".api.invalid_border_nonzero_array"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "KHR-GLES32.core.compressed_for"
#define VkglTestCase_001186_2 "mat.api.invalid_format_mismatch"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "KHR-GLES32.core.compressed_"
#define VkglTestCase_001187_2 "format.api.invalid_target_3d"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "KHR-GLES32.core.compressed_format.api"
#define VkglTestCase_001188_2 ".texstorage_accepts_compressed_format"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "KHR-GLES32.core.compressed_format.api."
#define VkglTestCase_001189_2 "invalid_teximage_with_compressed_format"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "KHR-GLES32.core.compressed"
#define VkglTestCase_001190_2 "_format.api.invalid_format"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "KHR-GLES32.core.compressed_fo"
#define VkglTestCase_001191_2 "rmat.api.invalid_format_array"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "KHR-GLES32.core.compressed_format."
#define VkglTestCase_001192_2 "api.invalid_too_small_unpack_buffer"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "KHR-GLES32.core.compressed_format."
#define VkglTestCase_001193_2 "api.invalid_inconsistent_data_size"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "KHR-GLES32.core.compressed_format.api"
#define VkglTestCase_001194_2 ".invalid_inconsistent_data_size_array"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "KHR-GLES32.core.compressed_for"
#define VkglTestCase_001195_2 "mat.api.invalid_offset_or_size"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "KHR-GLES32.core.compressed_format."
#define VkglTestCase_001196_2 "api.copy_compressed_to_uncompressed"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "KHR-GLES32.core.compressed_format."
#define VkglTestCase_001197_2 "api.copy_uncompressed_to_compressed"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "KHR-GLES32.core.compressed_format"
#define VkglTestCase_001198_2 ".api.copy_compressed_to_compressed"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);
