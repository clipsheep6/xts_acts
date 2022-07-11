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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010230_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010230_2 "exture.format.a8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010230, VkglTestCase_010230_1, VkglTestCase_010230_2);

#define VkglTestCase_010231_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010231_2 "exture.format.a8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010231, VkglTestCase_010231_1, VkglTestCase_010231_2);

#define VkglTestCase_010232_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010232_2 "xture.format.a8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010232, VkglTestCase_010232_1, VkglTestCase_010232_2);

#define VkglTestCase_010233_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010233_2 "xture.format.a8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010233, VkglTestCase_010233_1, VkglTestCase_010233_2);

#define VkglTestCase_010234_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010234_2 "exture.format.l8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010234, VkglTestCase_010234_1, VkglTestCase_010234_2);

#define VkglTestCase_010235_1 "dEQP-GLES2.functional.t"
#define VkglTestCase_010235_2 "exture.format.l8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010235, VkglTestCase_010235_1, VkglTestCase_010235_2);

#define VkglTestCase_010236_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010236_2 "xture.format.l8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010236, VkglTestCase_010236_1, VkglTestCase_010236_2);

#define VkglTestCase_010237_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010237_2 "xture.format.l8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010237, VkglTestCase_010237_1, VkglTestCase_010237_2);

#define VkglTestCase_010238_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010238_2 "xture.format.la88_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010238, VkglTestCase_010238_1, VkglTestCase_010238_2);

#define VkglTestCase_010239_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010239_2 "xture.format.la88_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010239, VkglTestCase_010239_1, VkglTestCase_010239_2);

#define VkglTestCase_010240_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010240_2 "ture.format.la88_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010240, VkglTestCase_010240_1, VkglTestCase_010240_2);

#define VkglTestCase_010241_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010241_2 "ture.format.la88_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010241, VkglTestCase_010241_1, VkglTestCase_010241_2);

#define VkglTestCase_010242_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010242_2 "ture.format.rgb565_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010242, VkglTestCase_010242_1, VkglTestCase_010242_2);

#define VkglTestCase_010243_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010243_2 "ture.format.rgb565_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010243, VkglTestCase_010243_1, VkglTestCase_010243_2);

#define VkglTestCase_010244_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010244_2 "ure.format.rgb565_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010244, VkglTestCase_010244_1, VkglTestCase_010244_2);

#define VkglTestCase_010245_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010245_2 "ure.format.rgb565_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010245, VkglTestCase_010245_1, VkglTestCase_010245_2);

#define VkglTestCase_010246_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010246_2 "ture.format.rgb888_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010246, VkglTestCase_010246_1, VkglTestCase_010246_2);

#define VkglTestCase_010247_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010247_2 "ture.format.rgb888_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010247, VkglTestCase_010247_1, VkglTestCase_010247_2);

#define VkglTestCase_010248_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010248_2 "ure.format.rgb888_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010248, VkglTestCase_010248_1, VkglTestCase_010248_2);

#define VkglTestCase_010249_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010249_2 "ure.format.rgb888_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010249, VkglTestCase_010249_1, VkglTestCase_010249_2);

#define VkglTestCase_010250_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010250_2 "ure.format.rgba4444_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010250, VkglTestCase_010250_1, VkglTestCase_010250_2);

#define VkglTestCase_010251_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010251_2 "ure.format.rgba4444_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010251, VkglTestCase_010251_1, VkglTestCase_010251_2);

#define VkglTestCase_010252_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010252_2 "re.format.rgba4444_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010252, VkglTestCase_010252_1, VkglTestCase_010252_2);

#define VkglTestCase_010253_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010253_2 "re.format.rgba4444_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010253, VkglTestCase_010253_1, VkglTestCase_010253_2);

#define VkglTestCase_010254_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010254_2 "ure.format.rgba5551_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010254, VkglTestCase_010254_1, VkglTestCase_010254_2);

#define VkglTestCase_010255_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010255_2 "ure.format.rgba5551_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010255, VkglTestCase_010255_1, VkglTestCase_010255_2);

#define VkglTestCase_010256_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010256_2 "re.format.rgba5551_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010256, VkglTestCase_010256_1, VkglTestCase_010256_2);

#define VkglTestCase_010257_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010257_2 "re.format.rgba5551_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010257, VkglTestCase_010257_1, VkglTestCase_010257_2);

#define VkglTestCase_010258_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010258_2 "ure.format.rgba8888_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010258, VkglTestCase_010258_1, VkglTestCase_010258_2);

#define VkglTestCase_010259_1 "dEQP-GLES2.functional.text"
#define VkglTestCase_010259_2 "ure.format.rgba8888_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010259, VkglTestCase_010259_1, VkglTestCase_010259_2);

#define VkglTestCase_010260_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010260_2 "re.format.rgba8888_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010260, VkglTestCase_010260_1, VkglTestCase_010260_2);

#define VkglTestCase_010261_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010261_2 "re.format.rgba8888_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010261, VkglTestCase_010261_1, VkglTestCase_010261_2);

#define VkglTestCase_010262_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010262_2 "xture.format.etc1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010262, VkglTestCase_010262_1, VkglTestCase_010262_2);

#define VkglTestCase_010263_1 "dEQP-GLES2.functional.te"
#define VkglTestCase_010263_2 "xture.format.etc1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010263, VkglTestCase_010263_1, VkglTestCase_010263_2);

#define VkglTestCase_010264_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010264_2 "ture.format.etc1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010264, VkglTestCase_010264_1, VkglTestCase_010264_2);

#define VkglTestCase_010265_1 "dEQP-GLES2.functional.tex"
#define VkglTestCase_010265_2 "ture.format.etc1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010265, VkglTestCase_010265_1, VkglTestCase_010265_2);
