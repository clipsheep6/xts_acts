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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002263_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002263_2 ".random.all_per_block_buffers.0"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002263, VkglTestCase_002263_1, VkglTestCase_002263_2);

#define VkglTestCase_002264_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002264_2 ".random.all_per_block_buffers.1"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002264, VkglTestCase_002264_1, VkglTestCase_002264_2);

#define VkglTestCase_002265_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002265_2 ".random.all_per_block_buffers.2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002265, VkglTestCase_002265_1, VkglTestCase_002265_2);

#define VkglTestCase_002266_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002266_2 ".random.all_per_block_buffers.3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002266, VkglTestCase_002266_1, VkglTestCase_002266_2);

#define VkglTestCase_002267_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002267_2 ".random.all_per_block_buffers.4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002267, VkglTestCase_002267_1, VkglTestCase_002267_2);

#define VkglTestCase_002268_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002268_2 ".random.all_per_block_buffers.5"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002268, VkglTestCase_002268_1, VkglTestCase_002268_2);

#define VkglTestCase_002269_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002269_2 ".random.all_per_block_buffers.6"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002269, VkglTestCase_002269_1, VkglTestCase_002269_2);

#define VkglTestCase_002270_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002270_2 ".random.all_per_block_buffers.7"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002270, VkglTestCase_002270_1, VkglTestCase_002270_2);

#define VkglTestCase_002271_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002271_2 ".random.all_per_block_buffers.8"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002271, VkglTestCase_002271_1, VkglTestCase_002271_2);

#define VkglTestCase_002272_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002272_2 ".random.all_per_block_buffers.9"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002272, VkglTestCase_002272_1, VkglTestCase_002272_2);

#define VkglTestCase_002273_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002273_2 ".random.all_per_block_buffers.10"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002273, VkglTestCase_002273_1, VkglTestCase_002273_2);

#define VkglTestCase_002274_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002274_2 ".random.all_per_block_buffers.11"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002274, VkglTestCase_002274_1, VkglTestCase_002274_2);

#define VkglTestCase_002275_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002275_2 ".random.all_per_block_buffers.12"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002275, VkglTestCase_002275_1, VkglTestCase_002275_2);

#define VkglTestCase_002276_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002276_2 ".random.all_per_block_buffers.13"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002276, VkglTestCase_002276_1, VkglTestCase_002276_2);

#define VkglTestCase_002277_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002277_2 ".random.all_per_block_buffers.14"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002277, VkglTestCase_002277_1, VkglTestCase_002277_2);

#define VkglTestCase_002278_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002278_2 ".random.all_per_block_buffers.15"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002278, VkglTestCase_002278_1, VkglTestCase_002278_2);

#define VkglTestCase_002279_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002279_2 ".random.all_per_block_buffers.16"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002279, VkglTestCase_002279_1, VkglTestCase_002279_2);

#define VkglTestCase_002280_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002280_2 ".random.all_per_block_buffers.17"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002280, VkglTestCase_002280_1, VkglTestCase_002280_2);

#define VkglTestCase_002281_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002281_2 ".random.all_per_block_buffers.18"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002281, VkglTestCase_002281_1, VkglTestCase_002281_2);

#define VkglTestCase_002282_1 "KHR-GLES3.shaders.uniform_block"
#define VkglTestCase_002282_2 ".random.all_per_block_buffers.19"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002282, VkglTestCase_002282_1, VkglTestCase_002282_2);
