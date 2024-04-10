/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

#ifndef ARKUI_CAPI_XTS_COMMON_TEST
#define ARKUI_CAPI_XTS_COMMON_TEST

#include <gtest/gtest.h>
#include <native_node.h>
#include <native_interface.h>

namespace ArkUICapiTest {

#define SUCCESS 0
#define INVALID_PARAM 401
#define PARAM_0 0
#define PARAM_1 1
#define PARAM_2 2
#define PARAM_3 3
#define PARAM_4 4
#define PARAM_5 5
#define PARAM_6 6
#define PARAM_7 7
#define PARAM_8 8

using namespace testing;
using namespace testing::ext;

class ScrollCapiTest : public testing::Test {
};

class ToggleCapiTest : public testing::Test {
};

} // namespace ArkUICapiTest
#endif // ARKUI_CAPI_XTS_COMMON_TEST