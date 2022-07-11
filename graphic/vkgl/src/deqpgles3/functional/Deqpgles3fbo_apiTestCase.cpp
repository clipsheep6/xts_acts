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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030842_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_030842_2 "api.valid_tex2d_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030842, VkglTestCase_030842_1, VkglTestCase_030842_2);

#define VkglTestCase_030843_1 "dEQP-GLES3.functional.fbo.a"
#define VkglTestCase_030843_2 "pi.valid_texcube_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030843, VkglTestCase_030843_1, VkglTestCase_030843_2);

#define VkglTestCase_030844_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_030844_2 ".api.valid_rbo_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030844, VkglTestCase_030844_1, VkglTestCase_030844_2);

#define VkglTestCase_030845_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_030845_2 ".api.attach_to_default_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030845, VkglTestCase_030845_1, VkglTestCase_030845_2);

#define VkglTestCase_030846_1 "dEQP-GLES3.functional.fbo.a"
#define VkglTestCase_030846_2 "pi.invalid_tex2d_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030846, VkglTestCase_030846_1, VkglTestCase_030846_2);

#define VkglTestCase_030847_1 "dEQP-GLES3.functional.fbo.ap"
#define VkglTestCase_030847_2 "i.invalid_texcube_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030847, VkglTestCase_030847_1, VkglTestCase_030847_2);

#define VkglTestCase_030848_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_030848_2 "api.invalid_rbo_attachments"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030848, VkglTestCase_030848_1, VkglTestCase_030848_2);

#define VkglTestCase_030849_1 "dEQP-GLES3.functional"
#define VkglTestCase_030849_2 ".fbo.api.attach_names"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030849, VkglTestCase_030849_1, VkglTestCase_030849_2);

#define VkglTestCase_030850_1 "dEQP-GLES3.functional."
#define VkglTestCase_030850_2 "fbo.api.texture_levels"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030850, VkglTestCase_030850_1, VkglTestCase_030850_2);

#define VkglTestCase_030851_1 "dEQP-GLES3.functional.fbo.api"
#define VkglTestCase_030851_2 ".attachment_query_default_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030851, VkglTestCase_030851_1, VkglTestCase_030851_2);

#define VkglTestCase_030852_1 "dEQP-GLES3.functional.fbo.ap"
#define VkglTestCase_030852_2 "i.attachment_query_empty_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030852, VkglTestCase_030852_1, VkglTestCase_030852_2);

#define VkglTestCase_030853_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_030853_2 "api.attachment_query_tex2d"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030853, VkglTestCase_030853_1, VkglTestCase_030853_2);

#define VkglTestCase_030854_1 "dEQP-GLES3.functional.fbo.a"
#define VkglTestCase_030854_2 "pi.attachment_query_texcube"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030854, VkglTestCase_030854_1, VkglTestCase_030854_2);

#define VkglTestCase_030855_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_030855_2 ".api.attachment_query_rbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030855, VkglTestCase_030855_1, VkglTestCase_030855_2);

#define VkglTestCase_030856_1 "dEQP-GLES3.functional.fbo.api.de"
#define VkglTestCase_030856_2 "lete_tex_2d_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030856, VkglTestCase_030856_1, VkglTestCase_030856_2);

#define VkglTestCase_030857_1 "dEQP-GLES3.functional.fbo.api.del"
#define VkglTestCase_030857_2 "ete_tex_cube_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030857, VkglTestCase_030857_1, VkglTestCase_030857_2);

#define VkglTestCase_030858_1 "dEQP-GLES3.functional.fbo.api.d"
#define VkglTestCase_030858_2 "elete_rbo_attached_to_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030858, VkglTestCase_030858_1, VkglTestCase_030858_2);

#define VkglTestCase_030859_1 "dEQP-GLES3.functional.fbo.api.dele"
#define VkglTestCase_030859_2 "te_tex_2d_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030859, VkglTestCase_030859_1, VkglTestCase_030859_2);

#define VkglTestCase_030860_1 "dEQP-GLES3.functional.fbo.api.delet"
#define VkglTestCase_030860_2 "e_tex_cube_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030860, VkglTestCase_030860_1, VkglTestCase_030860_2);

#define VkglTestCase_030861_1 "dEQP-GLES3.functional.fbo.api.del"
#define VkglTestCase_030861_2 "ete_rbo_attached_to_not_bound_fbo"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030861, VkglTestCase_030861_1, VkglTestCase_030861_2);
