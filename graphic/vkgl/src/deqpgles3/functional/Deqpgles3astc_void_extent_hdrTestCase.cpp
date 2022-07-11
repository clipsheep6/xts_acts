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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027374_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027374_2 "mpressed.astc.void_extent_hdr.4x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027374, VkglTestCase_027374_1, VkglTestCase_027374_2);

#define VkglTestCase_027375_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027375_2 "mpressed.astc.void_extent_hdr.5x4"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027375, VkglTestCase_027375_1, VkglTestCase_027375_2);

#define VkglTestCase_027376_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027376_2 "mpressed.astc.void_extent_hdr.5x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027376, VkglTestCase_027376_1, VkglTestCase_027376_2);

#define VkglTestCase_027377_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027377_2 "mpressed.astc.void_extent_hdr.6x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027377, VkglTestCase_027377_1, VkglTestCase_027377_2);

#define VkglTestCase_027378_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027378_2 "mpressed.astc.void_extent_hdr.6x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027378, VkglTestCase_027378_1, VkglTestCase_027378_2);

#define VkglTestCase_027379_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027379_2 "mpressed.astc.void_extent_hdr.8x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027379, VkglTestCase_027379_1, VkglTestCase_027379_2);

#define VkglTestCase_027380_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027380_2 "mpressed.astc.void_extent_hdr.8x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027380, VkglTestCase_027380_1, VkglTestCase_027380_2);

#define VkglTestCase_027381_1 "dEQP-GLES3.functional.texture.co"
#define VkglTestCase_027381_2 "mpressed.astc.void_extent_hdr.8x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027381, VkglTestCase_027381_1, VkglTestCase_027381_2);

#define VkglTestCase_027382_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027382_2 "pressed.astc.void_extent_hdr.10x5"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027382, VkglTestCase_027382_1, VkglTestCase_027382_2);

#define VkglTestCase_027383_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027383_2 "pressed.astc.void_extent_hdr.10x6"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027383, VkglTestCase_027383_1, VkglTestCase_027383_2);

#define VkglTestCase_027384_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027384_2 "pressed.astc.void_extent_hdr.10x8"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027384, VkglTestCase_027384_1, VkglTestCase_027384_2);

#define VkglTestCase_027385_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027385_2 "pressed.astc.void_extent_hdr.10x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027385, VkglTestCase_027385_1, VkglTestCase_027385_2);

#define VkglTestCase_027386_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027386_2 "pressed.astc.void_extent_hdr.12x10"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027386, VkglTestCase_027386_1, VkglTestCase_027386_2);

#define VkglTestCase_027387_1 "dEQP-GLES3.functional.texture.com"
#define VkglTestCase_027387_2 "pressed.astc.void_extent_hdr.12x12"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027387, VkglTestCase_027387_1, VkglTestCase_027387_2);
