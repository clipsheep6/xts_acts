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
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011110_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011110_2 "nt_ops.depth_stencil.random.0"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011110, VkglTestCase_011110_1, VkglTestCase_011110_2);

#define VkglTestCase_011111_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011111_2 "nt_ops.depth_stencil.random.1"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011111, VkglTestCase_011111_1, VkglTestCase_011111_2);

#define VkglTestCase_011112_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011112_2 "nt_ops.depth_stencil.random.2"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011112, VkglTestCase_011112_1, VkglTestCase_011112_2);

#define VkglTestCase_011113_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011113_2 "nt_ops.depth_stencil.random.3"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011113, VkglTestCase_011113_1, VkglTestCase_011113_2);

#define VkglTestCase_011114_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011114_2 "nt_ops.depth_stencil.random.4"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011114, VkglTestCase_011114_1, VkglTestCase_011114_2);

#define VkglTestCase_011115_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011115_2 "nt_ops.depth_stencil.random.5"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011115, VkglTestCase_011115_1, VkglTestCase_011115_2);

#define VkglTestCase_011116_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011116_2 "nt_ops.depth_stencil.random.6"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011116, VkglTestCase_011116_1, VkglTestCase_011116_2);

#define VkglTestCase_011117_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011117_2 "nt_ops.depth_stencil.random.7"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011117, VkglTestCase_011117_1, VkglTestCase_011117_2);

#define VkglTestCase_011118_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011118_2 "nt_ops.depth_stencil.random.8"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011118, VkglTestCase_011118_1, VkglTestCase_011118_2);

#define VkglTestCase_011119_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011119_2 "nt_ops.depth_stencil.random.9"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011119, VkglTestCase_011119_1, VkglTestCase_011119_2);

#define VkglTestCase_011120_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011120_2 "t_ops.depth_stencil.random.10"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011120, VkglTestCase_011120_1, VkglTestCase_011120_2);

#define VkglTestCase_011121_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011121_2 "t_ops.depth_stencil.random.11"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011121, VkglTestCase_011121_1, VkglTestCase_011121_2);

#define VkglTestCase_011122_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011122_2 "t_ops.depth_stencil.random.12"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011122, VkglTestCase_011122_1, VkglTestCase_011122_2);

#define VkglTestCase_011123_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011123_2 "t_ops.depth_stencil.random.13"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011123, VkglTestCase_011123_1, VkglTestCase_011123_2);

#define VkglTestCase_011124_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011124_2 "t_ops.depth_stencil.random.14"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011124, VkglTestCase_011124_1, VkglTestCase_011124_2);

#define VkglTestCase_011125_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011125_2 "t_ops.depth_stencil.random.15"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011125, VkglTestCase_011125_1, VkglTestCase_011125_2);

#define VkglTestCase_011126_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011126_2 "t_ops.depth_stencil.random.16"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011126, VkglTestCase_011126_1, VkglTestCase_011126_2);

#define VkglTestCase_011127_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011127_2 "t_ops.depth_stencil.random.17"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011127, VkglTestCase_011127_1, VkglTestCase_011127_2);

#define VkglTestCase_011128_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011128_2 "t_ops.depth_stencil.random.18"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011128, VkglTestCase_011128_1, VkglTestCase_011128_2);

#define VkglTestCase_011129_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011129_2 "t_ops.depth_stencil.random.19"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011129, VkglTestCase_011129_1, VkglTestCase_011129_2);

#define VkglTestCase_011130_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011130_2 "t_ops.depth_stencil.random.20"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011130, VkglTestCase_011130_1, VkglTestCase_011130_2);

#define VkglTestCase_011131_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011131_2 "t_ops.depth_stencil.random.21"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011131, VkglTestCase_011131_1, VkglTestCase_011131_2);

#define VkglTestCase_011132_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011132_2 "t_ops.depth_stencil.random.22"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011132, VkglTestCase_011132_1, VkglTestCase_011132_2);

#define VkglTestCase_011133_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011133_2 "t_ops.depth_stencil.random.23"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011133, VkglTestCase_011133_1, VkglTestCase_011133_2);

#define VkglTestCase_011134_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011134_2 "t_ops.depth_stencil.random.24"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011134, VkglTestCase_011134_1, VkglTestCase_011134_2);
