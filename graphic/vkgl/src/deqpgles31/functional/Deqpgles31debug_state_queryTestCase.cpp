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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018313_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018313_2 "ry.max_debug_message_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018313, VkglTestCase_018313_1, VkglTestCase_018313_2);

#define VkglTestCase_018314_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018314_2 "ry.max_debug_message_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018314, VkglTestCase_018314_1, VkglTestCase_018314_2);

#define VkglTestCase_018315_1 "dEQP-GLES31.functional.debug.state_quer"
#define VkglTestCase_018315_2 "y.max_debug_message_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018315, VkglTestCase_018315_1, VkglTestCase_018315_2);

#define VkglTestCase_018316_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018316_2 "ery.max_debug_message_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018316, VkglTestCase_018316_1, VkglTestCase_018316_2);

#define VkglTestCase_018317_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018317_2 "ry.max_debug_logged_messages_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018317, VkglTestCase_018317_1, VkglTestCase_018317_2);

#define VkglTestCase_018318_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018318_2 "ry.max_debug_logged_messages_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018318, VkglTestCase_018318_1, VkglTestCase_018318_2);

#define VkglTestCase_018319_1 "dEQP-GLES31.functional.debug.state_quer"
#define VkglTestCase_018319_2 "y.max_debug_logged_messages_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018319, VkglTestCase_018319_1, VkglTestCase_018319_2);

#define VkglTestCase_018320_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018320_2 "ery.max_debug_logged_messages_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018320, VkglTestCase_018320_1, VkglTestCase_018320_2);

#define VkglTestCase_018321_1 "dEQP-GLES31.functional.debug.state_quer"
#define VkglTestCase_018321_2 "y.max_debug_group_stack_depth_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018321, VkglTestCase_018321_1, VkglTestCase_018321_2);

#define VkglTestCase_018322_1 "dEQP-GLES31.functional.debug.state_quer"
#define VkglTestCase_018322_2 "y.max_debug_group_stack_depth_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018322, VkglTestCase_018322_1, VkglTestCase_018322_2);

#define VkglTestCase_018323_1 "dEQP-GLES31.functional.debug.state_query"
#define VkglTestCase_018323_2 ".max_debug_group_stack_depth_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018323, VkglTestCase_018323_1, VkglTestCase_018323_2);

#define VkglTestCase_018324_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018324_2 "ry.max_debug_group_stack_depth_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018324, VkglTestCase_018324_1, VkglTestCase_018324_2);

#define VkglTestCase_018325_1 "dEQP-GLES31.functional.debug.state"
#define VkglTestCase_018325_2 "_query.max_label_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018325, VkglTestCase_018325_1, VkglTestCase_018325_2);

#define VkglTestCase_018326_1 "dEQP-GLES31.functional.debug.state"
#define VkglTestCase_018326_2 "_query.max_label_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018326, VkglTestCase_018326_1, VkglTestCase_018326_2);

#define VkglTestCase_018327_1 "dEQP-GLES31.functional.debug.state_"
#define VkglTestCase_018327_2 "query.max_label_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018327, VkglTestCase_018327_1, VkglTestCase_018327_2);

#define VkglTestCase_018328_1 "dEQP-GLES31.functional.debug.stat"
#define VkglTestCase_018328_2 "e_query.max_label_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018328, VkglTestCase_018328_1, VkglTestCase_018328_2);

#define VkglTestCase_018329_1 "dEQP-GLES31.functional.debug.st"
#define VkglTestCase_018329_2 "ate_query.debug_output_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018329, VkglTestCase_018329_1, VkglTestCase_018329_2);

#define VkglTestCase_018330_1 "dEQP-GLES31.functional.debug.sta"
#define VkglTestCase_018330_2 "te_query.debug_output_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018330, VkglTestCase_018330_1, VkglTestCase_018330_2);

#define VkglTestCase_018331_1 "dEQP-GLES31.functional.debug.sta"
#define VkglTestCase_018331_2 "te_query.debug_output_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018331, VkglTestCase_018331_1, VkglTestCase_018331_2);

#define VkglTestCase_018332_1 "dEQP-GLES31.functional.debug.stat"
#define VkglTestCase_018332_2 "e_query.debug_output_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018332, VkglTestCase_018332_1, VkglTestCase_018332_2);

#define VkglTestCase_018333_1 "dEQP-GLES31.functional.debug.st"
#define VkglTestCase_018333_2 "ate_query.debug_output_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018333, VkglTestCase_018333_1, VkglTestCase_018333_2);

#define VkglTestCase_018334_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018334_2 "ery.debug_output_synchronous_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018334, VkglTestCase_018334_1, VkglTestCase_018334_2);

#define VkglTestCase_018335_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018335_2 "ry.debug_output_synchronous_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018335, VkglTestCase_018335_1, VkglTestCase_018335_2);

#define VkglTestCase_018336_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018336_2 "ry.debug_output_synchronous_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018336, VkglTestCase_018336_1, VkglTestCase_018336_2);

#define VkglTestCase_018337_1 "dEQP-GLES31.functional.debug.state_quer"
#define VkglTestCase_018337_2 "y.debug_output_synchronous_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018337, VkglTestCase_018337_1, VkglTestCase_018337_2);

#define VkglTestCase_018338_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018338_2 "ery.debug_output_synchronous_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018338, VkglTestCase_018338_1, VkglTestCase_018338_2);

#define VkglTestCase_018339_1 "dEQP-GLES31.functional.debug.state_q"
#define VkglTestCase_018339_2 "uery.debug_logged_messages_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018339, VkglTestCase_018339_1, VkglTestCase_018339_2);

#define VkglTestCase_018340_1 "dEQP-GLES31.functional.debug.state_q"
#define VkglTestCase_018340_2 "uery.debug_logged_messages_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018340, VkglTestCase_018340_1, VkglTestCase_018340_2);

#define VkglTestCase_018341_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018341_2 "ery.debug_logged_messages_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018341, VkglTestCase_018341_1, VkglTestCase_018341_2);

#define VkglTestCase_018342_1 "dEQP-GLES31.functional.debug.state_"
#define VkglTestCase_018342_2 "query.debug_logged_messages_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018342, VkglTestCase_018342_1, VkglTestCase_018342_2);

#define VkglTestCase_018343_1 "dEQP-GLES31.functional.debug.state_query.d"
#define VkglTestCase_018343_2 "ebug_next_logged_message_length_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018343, VkglTestCase_018343_1, VkglTestCase_018343_2);

#define VkglTestCase_018344_1 "dEQP-GLES31.functional.debug.state_query.d"
#define VkglTestCase_018344_2 "ebug_next_logged_message_length_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018344, VkglTestCase_018344_1, VkglTestCase_018344_2);

#define VkglTestCase_018345_1 "dEQP-GLES31.functional.debug.state_query.de"
#define VkglTestCase_018345_2 "bug_next_logged_message_length_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018345, VkglTestCase_018345_1, VkglTestCase_018345_2);

#define VkglTestCase_018346_1 "dEQP-GLES31.functional.debug.state_query."
#define VkglTestCase_018346_2 "debug_next_logged_message_length_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018346, VkglTestCase_018346_1, VkglTestCase_018346_2);

#define VkglTestCase_018347_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018347_2 "ery.debug_group_stack_depth_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018347, VkglTestCase_018347_1, VkglTestCase_018347_2);

#define VkglTestCase_018348_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018348_2 "ery.debug_group_stack_depth_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018348, VkglTestCase_018348_1, VkglTestCase_018348_2);

#define VkglTestCase_018349_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018349_2 "ry.debug_group_stack_depth_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018349, VkglTestCase_018349_1, VkglTestCase_018349_2);

#define VkglTestCase_018350_1 "dEQP-GLES31.functional.debug.state_q"
#define VkglTestCase_018350_2 "uery.debug_group_stack_depth_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018350, VkglTestCase_018350_1, VkglTestCase_018350_2);

#define VkglTestCase_018351_1 "dEQP-GLES31.functional.debug.state_qu"
#define VkglTestCase_018351_2 "ery.debug_callback_function_getpointer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018351, VkglTestCase_018351_1, VkglTestCase_018351_2);

#define VkglTestCase_018352_1 "dEQP-GLES31.functional.debug.state_que"
#define VkglTestCase_018352_2 "ry.debug_callback_user_param_getpointer"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018352, VkglTestCase_018352_1, VkglTestCase_018352_2);
