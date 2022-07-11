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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002385_1 "KHR-GLES31.core.compressed"
#define VkglTestCase_002385_2 "_format.api.invalid_target"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002385, VkglTestCase_002385_1, VkglTestCase_002385_2);

#define VkglTestCase_002386_1 "KHR-GLES31.core.compressed_for"
#define VkglTestCase_002386_2 "mat.api.invalid_width_or_height"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002386, VkglTestCase_002386_1, VkglTestCase_002386_2);

#define VkglTestCase_002387_1 "KHR-GLES31.core.compressed_forma"
#define VkglTestCase_002387_2 "t.api.invalid_size_value_negative"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002387, VkglTestCase_002387_1, VkglTestCase_002387_2);

#define VkglTestCase_002388_1 "KHR-GLES31.core.compressed_for"
#define VkglTestCase_002388_2 "mat.api.invalid_border_nonzero"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002388, VkglTestCase_002388_1, VkglTestCase_002388_2);

#define VkglTestCase_002389_1 "KHR-GLES31.core.compressed_for"
#define VkglTestCase_002389_2 "mat.api.invalid_format_mismatch"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002389, VkglTestCase_002389_1, VkglTestCase_002389_2);

#define VkglTestCase_002390_1 "KHR-GLES31.core.compressed_"
#define VkglTestCase_002390_2 "format.api.invalid_target_3d"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002390, VkglTestCase_002390_1, VkglTestCase_002390_2);

#define VkglTestCase_002391_1 "KHR-GLES31.core.compressed_format.api"
#define VkglTestCase_002391_2 ".texstorage_accepts_compressed_format"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002391, VkglTestCase_002391_1, VkglTestCase_002391_2);

#define VkglTestCase_002392_1 "KHR-GLES31.core.compressed_format.api."
#define VkglTestCase_002392_2 "invalid_teximage_with_compressed_format"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002392, VkglTestCase_002392_1, VkglTestCase_002392_2);

#define VkglTestCase_002393_1 "KHR-GLES31.core.compressed"
#define VkglTestCase_002393_2 "_format.api.invalid_format"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002393, VkglTestCase_002393_1, VkglTestCase_002393_2);

#define VkglTestCase_002394_1 "KHR-GLES31.core.compressed_format."
#define VkglTestCase_002394_2 "api.invalid_too_small_unpack_buffer"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002394, VkglTestCase_002394_1, VkglTestCase_002394_2);

#define VkglTestCase_002395_1 "KHR-GLES31.core.compressed_format."
#define VkglTestCase_002395_2 "api.invalid_inconsistent_data_size"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002395, VkglTestCase_002395_1, VkglTestCase_002395_2);

#define VkglTestCase_002396_1 "KHR-GLES31.core.compressed_for"
#define VkglTestCase_002396_2 "mat.api.invalid_offset_or_size"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002396, VkglTestCase_002396_1, VkglTestCase_002396_2);
