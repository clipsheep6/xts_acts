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
#include "../ActsTexture0004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006266, "dEQP-VK.texture.multisample.atomic.storage_image_r32i.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006267, "dEQP-VK.texture.multisample.atomic.storage_image_r32ui.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006268, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_2.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006269, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_4.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006270, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_8.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006271, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_16.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006272, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_32.*");

static SHRINK_HWTEST_F(ActsTexture0004TS, TC006273, "dEQP-VK.texture.multisample.invalid_sample_index.sample_count_64.*");
