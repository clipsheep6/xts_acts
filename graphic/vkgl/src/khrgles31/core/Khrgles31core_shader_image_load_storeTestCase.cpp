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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002001_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002001_2 "ge_load_store.basic-api-get"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002001, VkglTestCase_002001_1, VkglTestCase_002001_2);

#define VkglTestCase_002002_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002002_2 "e_load_store.basic-api-bind"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002002, VkglTestCase_002002_1, VkglTestCase_002002_2);

#define VkglTestCase_002003_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002003_2 "_load_store.basic-api-barrier"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002003, VkglTestCase_002003_1, VkglTestCase_002003_2);

#define VkglTestCase_002004_1 "KHR-GLES31.core.shader_image_load"
#define VkglTestCase_002004_2 "_store.basic-api-barrier-byRegion"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002004, VkglTestCase_002004_1, VkglTestCase_002004_2);

#define VkglTestCase_002005_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002005_2 "load_store.basic-api-texParam"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002005, VkglTestCase_002005_1, VkglTestCase_002005_2);

#define VkglTestCase_002006_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002006_2 "d_store.basic-allFormats-store-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002006, VkglTestCase_002006_1, VkglTestCase_002006_2);

#define VkglTestCase_002007_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002007_2 "d_store.basic-allFormats-store-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002007, VkglTestCase_002007_1, VkglTestCase_002007_2);

#define VkglTestCase_002008_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002008_2 "d_store.basic-allFormats-load-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002008, VkglTestCase_002008_1, VkglTestCase_002008_2);

#define VkglTestCase_002009_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002009_2 "d_store.basic-allFormats-load-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002009, VkglTestCase_002009_1, VkglTestCase_002009_2);

#define VkglTestCase_002010_1 "KHR-GLES31.core.shader_image_load_store"
#define VkglTestCase_002010_2 ".basic-allFormats-loadStoreComputeStage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002010, VkglTestCase_002010_1, VkglTestCase_002010_2);

#define VkglTestCase_002011_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002011_2 "d_store.basic-allTargets-store-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002011, VkglTestCase_002011_1, VkglTestCase_002011_2);

#define VkglTestCase_002012_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002012_2 "d_store.basic-allTargets-store-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002012, VkglTestCase_002012_1, VkglTestCase_002012_2);

#define VkglTestCase_002013_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002013_2 "d_store.basic-allTargets-load-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002013, VkglTestCase_002013_1, VkglTestCase_002013_2);

#define VkglTestCase_002014_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002014_2 "d_store.basic-allTargets-load-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002014, VkglTestCase_002014_1, VkglTestCase_002014_2);

#define VkglTestCase_002015_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002015_2 "d_store.basic-allTargets-atomicFS"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002015, VkglTestCase_002015_1, VkglTestCase_002015_2);

#define VkglTestCase_002016_1 "KHR-GLES31.core.shader_image_load_"
#define VkglTestCase_002016_2 "store.basic-allTargets-loadStoreVS"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002016, VkglTestCase_002016_1, VkglTestCase_002016_2);

#define VkglTestCase_002017_1 "KHR-GLES31.core.shader_image_load_"
#define VkglTestCase_002017_2 "store.basic-allTargets-loadStoreCS"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002017, VkglTestCase_002017_1, VkglTestCase_002017_2);

#define VkglTestCase_002018_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002018_2 "d_store.basic-allTargets-atomicVS"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002018, VkglTestCase_002018_1, VkglTestCase_002018_2);

#define VkglTestCase_002019_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002019_2 "d_store.basic-allTargets-atomicCS"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002019, VkglTestCase_002019_1, VkglTestCase_002019_2);

#define VkglTestCase_002020_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002020_2 "load_store.basic-glsl-misc-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002020, VkglTestCase_002020_1, VkglTestCase_002020_2);

#define VkglTestCase_002021_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002021_2 "load_store.basic-glsl-misc-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002021, VkglTestCase_002021_1, VkglTestCase_002021_2);

#define VkglTestCase_002022_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002022_2 "d_store.basic-glsl-earlyFragTests"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002022, VkglTestCase_002022_1, VkglTestCase_002022_2);

#define VkglTestCase_002023_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002023_2 "_load_store.basic-glsl-const"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002023, VkglTestCase_002023_1, VkglTestCase_002023_2);

#define VkglTestCase_002024_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002024_2 "d_store.advanced-sync-imageAccess"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002024, VkglTestCase_002024_1, VkglTestCase_002024_2);

#define VkglTestCase_002025_1 "KHR-GLES31.core.shader_image_loa"
#define VkglTestCase_002025_2 "d_store.advanced-sync-vertexArray"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002025, VkglTestCase_002025_1, VkglTestCase_002025_2);

#define VkglTestCase_002026_1 "KHR-GLES31.core.shader_image_load"
#define VkglTestCase_002026_2 "_store.advanced-sync-imageAccess2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002026, VkglTestCase_002026_1, VkglTestCase_002026_2);

#define VkglTestCase_002027_1 "KHR-GLES31.core.shader_image_load"
#define VkglTestCase_002027_2 "_store.advanced-allStages-oneImage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002027, VkglTestCase_002027_1, VkglTestCase_002027_2);

#define VkglTestCase_002028_1 "KHR-GLES31.core.shader_image_load"
#define VkglTestCase_002028_2 "_store.advanced-memory-order-vsfs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002028, VkglTestCase_002028_1, VkglTestCase_002028_2);

#define VkglTestCase_002029_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002029_2 "load_store.advanced-sso-simple"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002029, VkglTestCase_002029_1, VkglTestCase_002029_2);

#define VkglTestCase_002030_1 "KHR-GLES31.core.shader_image_l"
#define VkglTestCase_002030_2 "oad_store.advanced-copyImage-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002030, VkglTestCase_002030_1, VkglTestCase_002030_2);

#define VkglTestCase_002031_1 "KHR-GLES31.core.shader_image_l"
#define VkglTestCase_002031_2 "oad_store.advanced-copyImage-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002031, VkglTestCase_002031_1, VkglTestCase_002031_2);

#define VkglTestCase_002032_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002032_2 "load_store.advanced-allMips-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002032, VkglTestCase_002032_1, VkglTestCase_002032_2);

#define VkglTestCase_002033_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002033_2 "load_store.advanced-allMips-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002033, VkglTestCase_002033_1, VkglTestCase_002033_2);

#define VkglTestCase_002034_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002034_2 "_load_store.advanced-cast-fs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002034, VkglTestCase_002034_1, VkglTestCase_002034_2);

#define VkglTestCase_002035_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002035_2 "_load_store.advanced-cast-cs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002035, VkglTestCase_002035_1, VkglTestCase_002035_2);

#define VkglTestCase_002036_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002036_2 "_load_store.negative-uniform"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002036, VkglTestCase_002036_1, VkglTestCase_002036_2);

#define VkglTestCase_002037_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002037_2 "ge_load_store.negative-bind"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002037, VkglTestCase_002037_1, VkglTestCase_002037_2);

#define VkglTestCase_002038_1 "KHR-GLES31.core.shader_image_lo"
#define VkglTestCase_002038_2 "ad_store.negative-compileErrors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002038, VkglTestCase_002038_1, VkglTestCase_002038_2);

#define VkglTestCase_002039_1 "KHR-GLES31.core.shader_image_"
#define VkglTestCase_002039_2 "load_store.negative-linkErrors"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002039, VkglTestCase_002039_1, VkglTestCase_002039_2);
