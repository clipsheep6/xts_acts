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
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012412_1 "dEQP-GLES2.functional.fbo."
#define VkglTestCase_012412_2 "api.valid_tex2d_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012412, VkglTestCase_012412_1, VkglTestCase_012412_2);

#define VkglTestCase_012413_1 "dEQP-GLES2.functional.fbo.a"
#define VkglTestCase_012413_2 "pi.valid_texcube_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012413, VkglTestCase_012413_1, VkglTestCase_012413_2);

#define VkglTestCase_012414_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012414_2 ".api.valid_rbo_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012414, VkglTestCase_012414_1, VkglTestCase_012414_2);

#define VkglTestCase_012415_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012415_2 ".api.attach_to_default_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012415, VkglTestCase_012415_1, VkglTestCase_012415_2);

#define VkglTestCase_012416_1 "dEQP-GLES2.functional.fbo.a"
#define VkglTestCase_012416_2 "pi.invalid_tex2d_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012416, VkglTestCase_012416_1, VkglTestCase_012416_2);

#define VkglTestCase_012417_1 "dEQP-GLES2.functional.fbo.ap"
#define VkglTestCase_012417_2 "i.invalid_texcube_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012417, VkglTestCase_012417_1, VkglTestCase_012417_2);

#define VkglTestCase_012418_1 "dEQP-GLES2.functional.fbo."
#define VkglTestCase_012418_2 "api.invalid_rbo_attachments"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012418, VkglTestCase_012418_1, VkglTestCase_012418_2);

#define VkglTestCase_012419_1 "dEQP-GLES2.functional"
#define VkglTestCase_012419_2 ".fbo.api.attach_names"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012419, VkglTestCase_012419_1, VkglTestCase_012419_2);

#define VkglTestCase_012420_1 "dEQP-GLES2.functional."
#define VkglTestCase_012420_2 "fbo.api.texture_levels"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012420, VkglTestCase_012420_1, VkglTestCase_012420_2);

#define VkglTestCase_012421_1 "dEQP-GLES2.functional.fbo.api"
#define VkglTestCase_012421_2 ".attachment_query_default_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012421, VkglTestCase_012421_1, VkglTestCase_012421_2);

#define VkglTestCase_012422_1 "dEQP-GLES2.functional.fbo.ap"
#define VkglTestCase_012422_2 "i.attachment_query_empty_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012422, VkglTestCase_012422_1, VkglTestCase_012422_2);

#define VkglTestCase_012423_1 "dEQP-GLES2.functional.fbo."
#define VkglTestCase_012423_2 "api.attachment_query_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012423, VkglTestCase_012423_1, VkglTestCase_012423_2);

#define VkglTestCase_012424_1 "dEQP-GLES2.functional.fbo.a"
#define VkglTestCase_012424_2 "pi.attachment_query_texcube"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012424, VkglTestCase_012424_1, VkglTestCase_012424_2);

#define VkglTestCase_012425_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012425_2 ".api.attachment_query_rbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012425, VkglTestCase_012425_1, VkglTestCase_012425_2);

#define VkglTestCase_012426_1 "dEQP-GLES2.functional.fbo.api.de"
#define VkglTestCase_012426_2 "lete_tex_2d_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012426, VkglTestCase_012426_1, VkglTestCase_012426_2);

#define VkglTestCase_012427_1 "dEQP-GLES2.functional.fbo.api.del"
#define VkglTestCase_012427_2 "ete_tex_cube_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012427, VkglTestCase_012427_1, VkglTestCase_012427_2);

#define VkglTestCase_012428_1 "dEQP-GLES2.functional.fbo.api.d"
#define VkglTestCase_012428_2 "elete_rbo_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012428, VkglTestCase_012428_1, VkglTestCase_012428_2);

#define VkglTestCase_012429_1 "dEQP-GLES2.functional.fbo.api.dele"
#define VkglTestCase_012429_2 "te_tex_2d_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012429, VkglTestCase_012429_1, VkglTestCase_012429_2);

#define VkglTestCase_012430_1 "dEQP-GLES2.functional.fbo.api.delet"
#define VkglTestCase_012430_2 "e_tex_cube_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012430, VkglTestCase_012430_1, VkglTestCase_012430_2);

#define VkglTestCase_012431_1 "dEQP-GLES2.functional.fbo.api.del"
#define VkglTestCase_012431_2 "ete_rbo_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012431, VkglTestCase_012431_1, VkglTestCase_012431_2);
