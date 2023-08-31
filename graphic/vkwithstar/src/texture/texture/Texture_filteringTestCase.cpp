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
#include "../TextureBaseFunc.h"
#include "../ActsTexture0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000001, "dEQP-VK.texture.filtering.2d.formats.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000002, "dEQP-VK.texture.filtering.2d.sizes.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000003, "dEQP-VK.texture.filtering.2d.combinations.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000004, "dEQP-VK.texture.filtering.unnormal.formats.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000005, "dEQP-VK.texture.filtering.unnormal.sizes.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000006, "dEQP-VK.texture.filtering.cube.formats.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000007, "dEQP-VK.texture.filtering.cube.sizes.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000008, "dEQP-VK.texture.filtering.cube.combinations.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000009, "dEQP-VK.texture.filtering.cube.no_edges_visible.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000010, "dEQP-VK.texture.filtering.2d_array.formats.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000011, "dEQP-VK.texture.filtering.2d_array.sizes.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000012, "dEQP-VK.texture.filtering.2d_array.combinations.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000013, "dEQP-VK.texture.filtering.3d.formats.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000014, "dEQP-VK.texture.filtering.3d.sizes.*");

static SHRINK_HWTEST_F(ActsTexture0001TS, TC000015, "dEQP-VK.texture.filtering.3d.combinations.*");
