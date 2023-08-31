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

static SHRINK_HWTEST_F(ActsImage0006TS, TC011886, "dEQP-VK.image.atomic_operations.add.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011887, "dEQP-VK.image.atomic_operations.add.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011888, "dEQP-VK.image.atomic_operations.add.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011889, "dEQP-VK.image.atomic_operations.add.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011890, "dEQP-VK.image.atomic_operations.add.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011891, "dEQP-VK.image.atomic_operations.add.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011892, "dEQP-VK.image.atomic_operations.add.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011893, "dEQP-VK.image.atomic_operations.add.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011894, "dEQP-VK.image.atomic_operations.sub.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011895, "dEQP-VK.image.atomic_operations.sub.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011896, "dEQP-VK.image.atomic_operations.sub.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011897, "dEQP-VK.image.atomic_operations.sub.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011898, "dEQP-VK.image.atomic_operations.sub.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011899, "dEQP-VK.image.atomic_operations.sub.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011900, "dEQP-VK.image.atomic_operations.sub.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011901, "dEQP-VK.image.atomic_operations.inc.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011902, "dEQP-VK.image.atomic_operations.inc.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011903, "dEQP-VK.image.atomic_operations.inc.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011904, "dEQP-VK.image.atomic_operations.inc.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011905, "dEQP-VK.image.atomic_operations.inc.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011906, "dEQP-VK.image.atomic_operations.inc.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011907, "dEQP-VK.image.atomic_operations.inc.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011908, "dEQP-VK.image.atomic_operations.dec.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011909, "dEQP-VK.image.atomic_operations.dec.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011910, "dEQP-VK.image.atomic_operations.dec.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011911, "dEQP-VK.image.atomic_operations.dec.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011912, "dEQP-VK.image.atomic_operations.dec.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011913, "dEQP-VK.image.atomic_operations.dec.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011914, "dEQP-VK.image.atomic_operations.dec.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011915, "dEQP-VK.image.atomic_operations.min.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011916, "dEQP-VK.image.atomic_operations.min.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011917, "dEQP-VK.image.atomic_operations.min.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011918, "dEQP-VK.image.atomic_operations.min.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011919, "dEQP-VK.image.atomic_operations.min.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011920, "dEQP-VK.image.atomic_operations.min.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011921, "dEQP-VK.image.atomic_operations.min.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011922, "dEQP-VK.image.atomic_operations.min.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011923, "dEQP-VK.image.atomic_operations.max.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011924, "dEQP-VK.image.atomic_operations.max.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011925, "dEQP-VK.image.atomic_operations.max.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011926, "dEQP-VK.image.atomic_operations.max.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011927, "dEQP-VK.image.atomic_operations.max.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011928, "dEQP-VK.image.atomic_operations.max.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011929, "dEQP-VK.image.atomic_operations.max.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011930, "dEQP-VK.image.atomic_operations.max.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011931, "dEQP-VK.image.atomic_operations.and.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011932, "dEQP-VK.image.atomic_operations.and.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011933, "dEQP-VK.image.atomic_operations.and.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011934, "dEQP-VK.image.atomic_operations.and.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011935, "dEQP-VK.image.atomic_operations.and.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011936, "dEQP-VK.image.atomic_operations.and.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011937, "dEQP-VK.image.atomic_operations.and.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011938, "dEQP-VK.image.atomic_operations.or.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011939, "dEQP-VK.image.atomic_operations.or.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011940, "dEQP-VK.image.atomic_operations.or.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011941, "dEQP-VK.image.atomic_operations.or.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011942, "dEQP-VK.image.atomic_operations.or.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011943, "dEQP-VK.image.atomic_operations.or.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011944, "dEQP-VK.image.atomic_operations.or.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011945, "dEQP-VK.image.atomic_operations.xor.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011946, "dEQP-VK.image.atomic_operations.xor.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011947, "dEQP-VK.image.atomic_operations.xor.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011948, "dEQP-VK.image.atomic_operations.xor.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011949, "dEQP-VK.image.atomic_operations.xor.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011950, "dEQP-VK.image.atomic_operations.xor.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011951, "dEQP-VK.image.atomic_operations.xor.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011952, "dEQP-VK.image.atomic_operations.exchange.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011953, "dEQP-VK.image.atomic_operations.exchange.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011954, "dEQP-VK.image.atomic_operations.exchange.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011955, "dEQP-VK.image.atomic_operations.exchange.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011956, "dEQP-VK.image.atomic_operations.exchange.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011957, "dEQP-VK.image.atomic_operations.exchange.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011958, "dEQP-VK.image.atomic_operations.exchange.cube_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011959, "dEQP-VK.image.atomic_operations.exchange.buffer.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011960, "dEQP-VK.image.atomic_operations.compare_exchange.1d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011961, "dEQP-VK.image.atomic_operations.compare_exchange.1d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011962, "dEQP-VK.image.atomic_operations.compare_exchange.2d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011963, "dEQP-VK.image.atomic_operations.compare_exchange.2d_array.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011964, "dEQP-VK.image.atomic_operations.compare_exchange.3d.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011965, "dEQP-VK.image.atomic_operations.compare_exchange.cube.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011966, "dEQP-VK.image.atomic_operations.compare_exchange.cube_array.*");
