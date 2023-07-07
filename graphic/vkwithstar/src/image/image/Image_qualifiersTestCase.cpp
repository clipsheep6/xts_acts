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
#include "../ImageBaseFunc.h"
#include "../ActsImage0006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0006TS, TC011766, "dEQP-VK.image.qualifiers.coherent.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011767, "dEQP-VK.image.qualifiers.coherent.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011768, "dEQP-VK.image.qualifiers.coherent.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011769, "dEQP-VK.image.qualifiers.coherent.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011770, "dEQP-VK.image.qualifiers.coherent.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011771, "dEQP-VK.image.qualifiers.coherent.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011772, "dEQP-VK.image.qualifiers.coherent.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011773, "dEQP-VK.image.qualifiers.coherent.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011774, "dEQP-VK.image.qualifiers.volatile.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011775, "dEQP-VK.image.qualifiers.volatile.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011776, "dEQP-VK.image.qualifiers.volatile.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011777, "dEQP-VK.image.qualifiers.volatile.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011778, "dEQP-VK.image.qualifiers.volatile.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011779, "dEQP-VK.image.qualifiers.volatile.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011780, "dEQP-VK.image.qualifiers.volatile.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011781, "dEQP-VK.image.qualifiers.volatile.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011782, "dEQP-VK.image.qualifiers.restrict.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011783, "dEQP-VK.image.qualifiers.restrict.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011784, "dEQP-VK.image.qualifiers.restrict.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011785, "dEQP-VK.image.qualifiers.restrict.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011786, "dEQP-VK.image.qualifiers.restrict.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011787, "dEQP-VK.image.qualifiers.restrict.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011788, "dEQP-VK.image.qualifiers.restrict.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011789, "dEQP-VK.image.qualifiers.restrict.buffer.*");
