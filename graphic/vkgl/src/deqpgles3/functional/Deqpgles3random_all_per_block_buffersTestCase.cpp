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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036141_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036141_2 "ndom.all_per_block_buffers.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036141, VkglTestCase_036141_1, VkglTestCase_036141_2);

#define VkglTestCase_036142_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036142_2 "ndom.all_per_block_buffers.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036142, VkglTestCase_036142_1, VkglTestCase_036142_2);

#define VkglTestCase_036143_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036143_2 "ndom.all_per_block_buffers.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036143, VkglTestCase_036143_1, VkglTestCase_036143_2);

#define VkglTestCase_036144_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036144_2 "ndom.all_per_block_buffers.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036144, VkglTestCase_036144_1, VkglTestCase_036144_2);

#define VkglTestCase_036145_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036145_2 "ndom.all_per_block_buffers.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036145, VkglTestCase_036145_1, VkglTestCase_036145_2);

#define VkglTestCase_036146_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036146_2 "ndom.all_per_block_buffers.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036146, VkglTestCase_036146_1, VkglTestCase_036146_2);

#define VkglTestCase_036147_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036147_2 "ndom.all_per_block_buffers.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036147, VkglTestCase_036147_1, VkglTestCase_036147_2);

#define VkglTestCase_036148_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036148_2 "ndom.all_per_block_buffers.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036148, VkglTestCase_036148_1, VkglTestCase_036148_2);

#define VkglTestCase_036149_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036149_2 "ndom.all_per_block_buffers.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036149, VkglTestCase_036149_1, VkglTestCase_036149_2);

#define VkglTestCase_036150_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036150_2 "ndom.all_per_block_buffers.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036150, VkglTestCase_036150_1, VkglTestCase_036150_2);

#define VkglTestCase_036151_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036151_2 "ndom.all_per_block_buffers.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036151, VkglTestCase_036151_1, VkglTestCase_036151_2);

#define VkglTestCase_036152_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036152_2 "ndom.all_per_block_buffers.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036152, VkglTestCase_036152_1, VkglTestCase_036152_2);

#define VkglTestCase_036153_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036153_2 "ndom.all_per_block_buffers.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036153, VkglTestCase_036153_1, VkglTestCase_036153_2);

#define VkglTestCase_036154_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036154_2 "ndom.all_per_block_buffers.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036154, VkglTestCase_036154_1, VkglTestCase_036154_2);

#define VkglTestCase_036155_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036155_2 "ndom.all_per_block_buffers.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036155, VkglTestCase_036155_1, VkglTestCase_036155_2);

#define VkglTestCase_036156_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036156_2 "ndom.all_per_block_buffers.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036156, VkglTestCase_036156_1, VkglTestCase_036156_2);

#define VkglTestCase_036157_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036157_2 "ndom.all_per_block_buffers.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036157, VkglTestCase_036157_1, VkglTestCase_036157_2);

#define VkglTestCase_036158_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036158_2 "ndom.all_per_block_buffers.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036158, VkglTestCase_036158_1, VkglTestCase_036158_2);

#define VkglTestCase_036159_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036159_2 "ndom.all_per_block_buffers.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036159, VkglTestCase_036159_1, VkglTestCase_036159_2);

#define VkglTestCase_036160_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036160_2 "ndom.all_per_block_buffers.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036160, VkglTestCase_036160_1, VkglTestCase_036160_2);

#define VkglTestCase_036161_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036161_2 "ndom.all_per_block_buffers.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036161, VkglTestCase_036161_1, VkglTestCase_036161_2);

#define VkglTestCase_036162_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036162_2 "ndom.all_per_block_buffers.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036162, VkglTestCase_036162_1, VkglTestCase_036162_2);

#define VkglTestCase_036163_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036163_2 "ndom.all_per_block_buffers.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036163, VkglTestCase_036163_1, VkglTestCase_036163_2);

#define VkglTestCase_036164_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036164_2 "ndom.all_per_block_buffers.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036164, VkglTestCase_036164_1, VkglTestCase_036164_2);

#define VkglTestCase_036165_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036165_2 "ndom.all_per_block_buffers.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036165, VkglTestCase_036165_1, VkglTestCase_036165_2);

#define VkglTestCase_036166_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036166_2 "ndom.all_per_block_buffers.25"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036166, VkglTestCase_036166_1, VkglTestCase_036166_2);

#define VkglTestCase_036167_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036167_2 "ndom.all_per_block_buffers.26"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036167, VkglTestCase_036167_1, VkglTestCase_036167_2);

#define VkglTestCase_036168_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036168_2 "ndom.all_per_block_buffers.27"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036168, VkglTestCase_036168_1, VkglTestCase_036168_2);

#define VkglTestCase_036169_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036169_2 "ndom.all_per_block_buffers.28"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036169, VkglTestCase_036169_1, VkglTestCase_036169_2);

#define VkglTestCase_036170_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036170_2 "ndom.all_per_block_buffers.29"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036170, VkglTestCase_036170_1, VkglTestCase_036170_2);

#define VkglTestCase_036171_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036171_2 "ndom.all_per_block_buffers.30"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036171, VkglTestCase_036171_1, VkglTestCase_036171_2);

#define VkglTestCase_036172_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036172_2 "ndom.all_per_block_buffers.31"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036172, VkglTestCase_036172_1, VkglTestCase_036172_2);

#define VkglTestCase_036173_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036173_2 "ndom.all_per_block_buffers.32"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036173, VkglTestCase_036173_1, VkglTestCase_036173_2);

#define VkglTestCase_036174_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036174_2 "ndom.all_per_block_buffers.33"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036174, VkglTestCase_036174_1, VkglTestCase_036174_2);

#define VkglTestCase_036175_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036175_2 "ndom.all_per_block_buffers.34"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036175, VkglTestCase_036175_1, VkglTestCase_036175_2);

#define VkglTestCase_036176_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036176_2 "ndom.all_per_block_buffers.35"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036176, VkglTestCase_036176_1, VkglTestCase_036176_2);

#define VkglTestCase_036177_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036177_2 "ndom.all_per_block_buffers.36"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036177, VkglTestCase_036177_1, VkglTestCase_036177_2);

#define VkglTestCase_036178_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036178_2 "ndom.all_per_block_buffers.37"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036178, VkglTestCase_036178_1, VkglTestCase_036178_2);

#define VkglTestCase_036179_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036179_2 "ndom.all_per_block_buffers.38"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036179, VkglTestCase_036179_1, VkglTestCase_036179_2);

#define VkglTestCase_036180_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036180_2 "ndom.all_per_block_buffers.39"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036180, VkglTestCase_036180_1, VkglTestCase_036180_2);

#define VkglTestCase_036181_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036181_2 "ndom.all_per_block_buffers.40"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036181, VkglTestCase_036181_1, VkglTestCase_036181_2);

#define VkglTestCase_036182_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036182_2 "ndom.all_per_block_buffers.41"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036182, VkglTestCase_036182_1, VkglTestCase_036182_2);

#define VkglTestCase_036183_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036183_2 "ndom.all_per_block_buffers.42"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036183, VkglTestCase_036183_1, VkglTestCase_036183_2);

#define VkglTestCase_036184_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036184_2 "ndom.all_per_block_buffers.43"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036184, VkglTestCase_036184_1, VkglTestCase_036184_2);

#define VkglTestCase_036185_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036185_2 "ndom.all_per_block_buffers.44"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036185, VkglTestCase_036185_1, VkglTestCase_036185_2);

#define VkglTestCase_036186_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036186_2 "ndom.all_per_block_buffers.45"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036186, VkglTestCase_036186_1, VkglTestCase_036186_2);

#define VkglTestCase_036187_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036187_2 "ndom.all_per_block_buffers.46"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036187, VkglTestCase_036187_1, VkglTestCase_036187_2);

#define VkglTestCase_036188_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036188_2 "ndom.all_per_block_buffers.47"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036188, VkglTestCase_036188_1, VkglTestCase_036188_2);

#define VkglTestCase_036189_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036189_2 "ndom.all_per_block_buffers.48"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036189, VkglTestCase_036189_1, VkglTestCase_036189_2);

#define VkglTestCase_036190_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036190_2 "ndom.all_per_block_buffers.49"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036190, VkglTestCase_036190_1, VkglTestCase_036190_2);
