/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
 /**
 * @addtogroup multiInput
 * @{
 *
 * @brief Defines multiInput-related tests, including case data and functions for auto test,
 *
 * @since 1.0
 * @version 1.0
 */
#ifndef OHOS_AUTO_TESTS_H
#define OHOS_AUTO_TESTS_H
#include <gtest/gtest.h>

#ifndef HWTEST_F_BUILD
#define HWTEST_F_BUILD
#endif
#undef HWTEST_F_BUILD

#ifdef  HWTEST_F_BUILD
#define AUTO_TEST_FUNC(moduleName, functionName, level)     HWTEST_F(moduleName, functionName, level)
#else
#define AUTO_TEST_FUNC(moduleName, functionName, level)     TEST(moduleName, functionName)
#endif

#endif