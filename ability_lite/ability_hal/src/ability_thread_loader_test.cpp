/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
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

#include "hctest.h"

#include "include/ability_thread_loader.h"
#include "include/slite_ability_thread.h"

using namespace OHOS;
using namespace AbilitySlite;

/**
* @brief  register a test suit named AbilityThreadLoaderSuite
* @param  subsystem name is aafwk
* @param  module name is  abilitythreadloader
* @param  test suit name is AbilityThreadLoaderSuite
*/
LITE_TEST_SUIT(aafwk, abilitythreadloader, AbilityThreadLoaderSuite);

static BOOL AbilityThreadLoaderSuiteSetUp(void)
{
    printf("----------test case with AbilityThreadLoaderSuite start-------------\n");
    return TRUE;
}

static BOOL AbilityThreadLoaderSuiteTearDown(void)
{
    printf("----------test case with AbilityThreadLoaderSuite end-------------\n");
    return TRUE;
}

class JsAbilityThread : public SliteAbilityThread {
public:
    AbilityThreadCreatorType GetAbilityThreadType() {
        return AbilityThreadCreatorType::JS_CREATOR;
    }

    JsAbilityThread() = default;

    ~JsAbilityThread() override = default;
};

class NativeAbilityThread : public SliteAbilityThread {
public:
    AbilityThreadCreatorType GetAbilityThreadType() {
        return AbilityThreadCreatorType::NATIVE_CREATOR;
    }

    NativeAbilityThread() = default;

    ~NativeAbilityThread() override = default;
};

SliteAbilityThread *createJsAbilityThread() {
    auto *jsThread = new JsAbilityThread();
    return jsThread;
}

SliteAbilityThread *createNativeAbilityThread() {
    auto *nativeThread = new NativeAbilityThread();
    return nativeThread;
}

/**
 * @tc.number    : SUB_AAFWK_ABILITY_0001
 * @tc.name      : testDefaultAbilityThreadLoader
 * @tc.desc      : testDefaultAbilityThreadLoader parameter illegal test
 */
LITE_TEST_CASE(AbilityThreadLoaderSuite, testDefaultAbilityThreadLoader, Function | MediumTest | Level0)
{
    printf("------start testDefaultAbilityThreadLoader------\n");
    AbilityThreadLoader loader = AbilityThreadLoader::GetInstance();
    auto *jsThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_EQUAL_STRING(jsThread, NULL);
    TEST_ASSERT_EQUAL_STRING(nativeThread, NULL);
    printf("------end testDefaultAbilityThreadLoader------\n");
}

/**
 * @tc.number    : SUB_AAFWK_ABILITY_0002
 * @tc.name      : testJsAbilityThreadLoader
 * @tc.desc      : testJsAbilityThreadLoader parameter illegal test
 */
LITE_TEST_CASE(AbilityThreadLoaderSuite, testJsAbilityThreadLoader, Function | MediumTest | Level0)
{
    printf("------start testJsAbilityThreadLoader------\n");
    AbilityThreadLoader loader = AbilityThreadLoader::GetInstance();
    loader.SetCreatorFunc(AbilityThreadCreatorType::JS_CREATOR, createJsAbilityThread);
    auto *jsThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_NOT_EQUAL(jsThread, NULL);
    TEST_ASSERT_EQUAL(jsThread->GetAbilityThreadType(), AbilityThreadCreatorType::JS_CREATOR);
    TEST_ASSERT_EQUAL_STRING(nativeThread, NULL);
    delete jsThread;
    jsThread = nullptr;

    loader.UnsetCreatorFunc(AbilityThreadCreatorType::JS_CREATOR);
    auto *jsThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_EQUAL_STRING(jsThread1, NULL);
    TEST_ASSERT_EQUAL_STRING(nativeThread1, NULL);
    printf("------end testJsAbilityThreadLoader------\n");
}

/**
 * @tc.number    : SUB_AAFWK_ABILITY_0003
 * @tc.name      : testNativeAbilityThreadLoader
 * @tc.desc      : testNativeAbilityThreadLoader parameter illegal test
 */
LITE_TEST_CASE(AbilityThreadLoaderSuite, testNativeAbilityThreadLoader, Function | MediumTest | Level0)
{
    printf("------start testNativeAbilityThreadLoader------\n");
    AbilityThreadLoader loader = AbilityThreadLoader::GetInstance();
    loader.SetCreatorFunc(AbilityThreadCreatorType::NATIVE_CREATOR, createNativeAbilityThread);
    auto *jsThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_NOT_EQUAL(nativeThread, NULL);
    TEST_ASSERT_EQUAL(nativeThread->GetAbilityThreadType(), AbilityThreadCreatorType::NATIVE_CREATOR);
    TEST_ASSERT_EQUAL_STRING(jsThread, NULL);
    delete nativeThread;
    nativeThread = nullptr;

    loader.UnsetCreatorFunc(AbilityThreadCreatorType::NATIVE_CREATOR);
    auto *jsThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_EQUAL_STRING(jsThread1, NULL);
    TEST_ASSERT_EQUAL_STRING(nativeThread1, NULL);
    printf("------end testNativeAbilityThreadLoader------\n");
}

/**
 * @tc.number    : SUB_AAFWK_ABILITY_0004
 * @tc.name      : testJsAndNativeAbilityThreadLoader
 * @tc.desc      : testJsAndNativeAbilityThreadLoader parameter illegal test
 */
LITE_TEST_CASE(AbilityThreadLoaderSuite, testJsAndNativeAbilityThreadLoader, Function | MediumTest | Level0)
{
    printf("------start testJsAndNativeAbilityThreadLoader------\n");
    AbilityThreadLoader loader = AbilityThreadLoader::GetInstance();
    loader.SetCreatorFunc(AbilityThreadCreatorType::JS_CREATOR, createJsAbilityThread);
    loader.SetCreatorFunc(AbilityThreadCreatorType::NATIVE_CREATOR, createNativeAbilityThread);
    auto *jsThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_NOT_EQUAL(jsThread, NULL);
    TEST_ASSERT_NOT_EQUAL(nativeThread, NULL);
    TEST_ASSERT_EQUAL(jsThread->GetAbilityThreadType(), AbilityThreadCreatorType::JS_CREATOR);
    TEST_ASSERT_EQUAL(nativeThread->GetAbilityThreadType(), AbilityThreadCreatorType::NATIVE_CREATOR);
    delete jsThread;
    jsThread = nullptr;
    delete nativeThread;
    nativeThread = nullptr;

    loader.UnsetCreatorFunc(AbilityThreadCreatorType::JS_CREATOR);
    loader.UnsetCreatorFunc(AbilityThreadCreatorType::NATIVE_CREATOR);
    auto *jsThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::JS_CREATOR));
    auto *nativeThread1 = dynamic_cast<JsAbilityThread*>(loader.CreateAbilityThread(AbilityThreadCreatorType::NATIVE_CREATOR));
    TEST_ASSERT_EQUAL_STRING(jsThread1, NULL);
    TEST_ASSERT_EQUAL_STRING(nativeThread1, NULL);
    printf("------end testJsAndNativeAbilityThreadLoader------\n");
}

RUN_TEST_SUITE(AbilityThreadLoaderSuite);