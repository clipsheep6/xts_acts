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
#include "../ActsImage0005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0005TS, TC011790, "dEQP-VK.image.image_size.1d.readonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011791, "dEQP-VK.image.image_size.1d.readonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011792, "dEQP-VK.image.image_size.1d.readonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011793, "dEQP-VK.image.image_size.1d.readonly_7.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011794, "dEQP-VK.image.image_size.1d.writeonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011795, "dEQP-VK.image.image_size.1d.writeonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011796, "dEQP-VK.image.image_size.1d.writeonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011797, "dEQP-VK.image.image_size.1d.writeonly_7.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011798, "dEQP-VK.image.image_size.1d.readonly_writeonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011799, "dEQP-VK.image.image_size.1d.readonly_writeonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011800, "dEQP-VK.image.image_size.1d.readonly_writeonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011801, "dEQP-VK.image.image_size.1d.readonly_writeonly_7.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011802, "dEQP-VK.image.image_size.1d_array.readonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011803, "dEQP-VK.image.image_size.1d_array.readonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011804, "dEQP-VK.image.image_size.1d_array.readonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011805, "dEQP-VK.image.image_size.1d_array.readonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011806, "dEQP-VK.image.image_size.1d_array.writeonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011807, "dEQP-VK.image.image_size.1d_array.writeonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011808, "dEQP-VK.image.image_size.1d_array.writeonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011809, "dEQP-VK.image.image_size.1d_array.writeonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011810, "dEQP-VK.image.image_size.1d_array.readonly_writeonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011811, "dEQP-VK.image.image_size.1d_array.readonly_writeonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011812, "dEQP-VK.image.image_size.1d_array.readonly_writeonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011813, "dEQP-VK.image.image_size.1d_array.readonly_writeonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011814, "dEQP-VK.image.image_size.2d.readonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011815, "dEQP-VK.image.image_size.2d.readonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011816, "dEQP-VK.image.image_size.2d.readonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011817, "dEQP-VK.image.image_size.2d.readonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011818, "dEQP-VK.image.image_size.2d.writeonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011819, "dEQP-VK.image.image_size.2d.writeonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011820, "dEQP-VK.image.image_size.2d.writeonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011821, "dEQP-VK.image.image_size.2d.writeonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011822, "dEQP-VK.image.image_size.2d.readonly_writeonly_32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011823, "dEQP-VK.image.image_size.2d.readonly_writeonly_12x34.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011824, "dEQP-VK.image.image_size.2d.readonly_writeonly_1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011825, "dEQP-VK.image.image_size.2d.readonly_writeonly_7x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011826, "dEQP-VK.image.image_size.2d_array.readonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011827, "dEQP-VK.image.image_size.2d_array.readonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011828, "dEQP-VK.image.image_size.2d_array.readonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011829, "dEQP-VK.image.image_size.2d_array.readonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011830, "dEQP-VK.image.image_size.2d_array.writeonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011831, "dEQP-VK.image.image_size.2d_array.writeonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011832, "dEQP-VK.image.image_size.2d_array.writeonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011833, "dEQP-VK.image.image_size.2d_array.writeonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011834, "dEQP-VK.image.image_size.2d_array.readonly_writeonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011835, "dEQP-VK.image.image_size.2d_array.readonly_writeonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011836, "dEQP-VK.image.image_size.2d_array.readonly_writeonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011837, "dEQP-VK.image.image_size.2d_array.readonly_writeonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011838, "dEQP-VK.image.image_size.3d.readonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011839, "dEQP-VK.image.image_size.3d.readonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011840, "dEQP-VK.image.image_size.3d.readonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011841, "dEQP-VK.image.image_size.3d.readonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011842, "dEQP-VK.image.image_size.3d.writeonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011843, "dEQP-VK.image.image_size.3d.writeonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011844, "dEQP-VK.image.image_size.3d.writeonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011845, "dEQP-VK.image.image_size.3d.writeonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011846, "dEQP-VK.image.image_size.3d.readonly_writeonly_32x32x32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011847, "dEQP-VK.image.image_size.3d.readonly_writeonly_12x34x56.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011848, "dEQP-VK.image.image_size.3d.readonly_writeonly_1x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011849, "dEQP-VK.image.image_size.3d.readonly_writeonly_7x1x1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011850, "dEQP-VK.image.image_size.cube.readonly_32x32x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011851, "dEQP-VK.image.image_size.cube.readonly_12x12x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011852, "dEQP-VK.image.image_size.cube.readonly_1x1x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011853, "dEQP-VK.image.image_size.cube.readonly_7x7x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011854, "dEQP-VK.image.image_size.cube.writeonly_32x32x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011855, "dEQP-VK.image.image_size.cube.writeonly_12x12x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011856, "dEQP-VK.image.image_size.cube.writeonly_1x1x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011857, "dEQP-VK.image.image_size.cube.writeonly_7x7x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011858, "dEQP-VK.image.image_size.cube.readonly_writeonly_32x32x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011859, "dEQP-VK.image.image_size.cube.readonly_writeonly_12x12x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011860, "dEQP-VK.image.image_size.cube.readonly_writeonly_1x1x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011861, "dEQP-VK.image.image_size.cube.readonly_writeonly_7x7x6.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011862, "dEQP-VK.image.image_size.cube_array.readonly_32x32x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011863, "dEQP-VK.image.image_size.cube_array.readonly_12x12x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011864, "dEQP-VK.image.image_size.cube_array.readonly_1x1x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011865, "dEQP-VK.image.image_size.cube_array.readonly_7x7x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011866, "dEQP-VK.image.image_size.cube_array.writeonly_32x32x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011867, "dEQP-VK.image.image_size.cube_array.writeonly_12x12x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011868, "dEQP-VK.image.image_size.cube_array.writeonly_1x1x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011869, "dEQP-VK.image.image_size.cube_array.writeonly_7x7x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011870, "dEQP-VK.image.image_size.cube_array.readonly_writeonly_32x32x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011871, "dEQP-VK.image.image_size.cube_array.readonly_writeonly_12x12x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011872, "dEQP-VK.image.image_size.cube_array.readonly_writeonly_1x1x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011873, "dEQP-VK.image.image_size.cube_array.readonly_writeonly_7x7x12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011874, "dEQP-VK.image.image_size.buffer.readonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011875, "dEQP-VK.image.image_size.buffer.readonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011876, "dEQP-VK.image.image_size.buffer.readonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011877, "dEQP-VK.image.image_size.buffer.readonly_7.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011878, "dEQP-VK.image.image_size.buffer.writeonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011879, "dEQP-VK.image.image_size.buffer.writeonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011880, "dEQP-VK.image.image_size.buffer.writeonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011881, "dEQP-VK.image.image_size.buffer.writeonly_7.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011882, "dEQP-VK.image.image_size.buffer.readonly_writeonly_32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011883, "dEQP-VK.image.image_size.buffer.readonly_writeonly_12.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011884, "dEQP-VK.image.image_size.buffer.readonly_writeonly_1.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011885, "dEQP-VK.image.image_size.buffer.readonly_writeonly_7.*");
