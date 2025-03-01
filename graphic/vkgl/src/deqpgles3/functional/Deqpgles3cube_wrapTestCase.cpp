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

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027029,
        "dEQP-GLES3.functional.texture",
        ".vertex.cube.wrap.clamp_clamp");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027030,
        "dEQP-GLES3.functional.texture",
        ".vertex.cube.wrap.clamp_repeat");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027031,
        "dEQP-GLES3.functional.texture",
        ".vertex.cube.wrap.clamp_mirror");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027032,
        "dEQP-GLES3.functional.texture",
        ".vertex.cube.wrap.repeat_clamp");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027033,
        "dEQP-GLES3.functional.texture.",
        "vertex.cube.wrap.repeat_repeat");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027034,
        "dEQP-GLES3.functional.texture.",
        "vertex.cube.wrap.repeat_mirror");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027035,
        "dEQP-GLES3.functional.texture",
        ".vertex.cube.wrap.mirror_clamp");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027036,
        "dEQP-GLES3.functional.texture.",
        "vertex.cube.wrap.mirror_repeat");

static SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027037,
        "dEQP-GLES3.functional.texture.",
        "vertex.cube.wrap.mirror_mirror");
