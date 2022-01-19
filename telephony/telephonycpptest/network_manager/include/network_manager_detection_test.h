/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#ifndef NETWORK_MANAGER_DETECTION_TEST_H
#define NETWORK_MANAGER_DETECTION_TEST_H

#include <string>
#include <gtest/gtest.h>
#include "i_net_detection_callback.h"
#include "i_net_conn_service.h"
#include "net_conn_constants.h"
#include "common.h"
#include "net_detection_callback_stub.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "if_system_ability_manager.h"
#include "net_conn_client.h"
#include "net_link_info.h"
#include "i_net_detection_callback.h"
#include "i_net_conn_service.h"


namespace OHOS {
namespace NetManagerStandard {

const int32_t NETID_1 = 1;
const int32_t NETID_2 = 2;
const int32_t NETID_INVALID = -1;
const int32_t NETID_OUT = 1001;
sptr<INetConnService> m_netConnService = nullptr;

class TestNetDetectionCallback : public NetDetectionCallbackStub {
public:
    TestNetDetectionCallback();
    virtual ~TestNetDetectionCallback() override;
    int32_t OnNetDetectionResultChanged(
        NetDetectionResultCode detectionResult, const std::string &urlRedirect) override;

public:
    static NetDetectionResultCode m_detectionResult;
    static std::string m_urlRedirect;
};

NetDetectionResultCode TestNetDetectionCallback::m_detectionResult = NET_DETECTION_FAIL;
std::string TestNetDetectionCallback::m_urlRedirect = "";

TestNetDetectionCallback::TestNetDetectionCallback() {}

TestNetDetectionCallback::~TestNetDetectionCallback() {}

int32_t TestNetDetectionCallback::OnNetDetectionResultChanged(
    NetDetectionResultCode detectionResult, const std::string &urlRedirect)
{
    switch (detectionResult) {
        case NetDetectionResultCode::NET_DETECTION_FAIL:
            std::cout << "NetDetectionResultCode::NET_DETECTION_FAIL" << std::endl;
            break;
        case NetDetectionResultCode::NET_DETECTION_SUCCESS:
            std::cout << "NetDetectionResultCode::NET_DETECTION_SUCCESS" << std::endl;
            break;
        case NetDetectionResultCode::NET_DETECTION_CAPTIVE_PORTAL:
            std::cout << "NetDetectionResultCode::NET_DETECTION_CAPTIVE_PORTAL" << std::endl;
            break;
        default:
            break;
    }
    m_detectionResult = detectionResult;
    m_urlRedirect = urlRedirect;
    std::cout << "TestNetDetectionCallback::OnNetDetectionResultChanged detectionResult:" <<
        static_cast<int32_t>(detectionResult) << "  urlRedirect:" << urlRedirect << std::endl;

    return 0;
}

sptr<INetDetectionCallback> detectionCallback = (std::make_unique<TestNetDetectionCallback>()).release();

class DetectionTest : public testing::Test {

public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void DetectionTest::SetUpTestCase()
{
    //HILOG_DEBUG(TAG, "msg: %{public}s", "NAPI_MOCK_VENDOR # init success ");
}

void DetectionTest::TearDownTestCase()
{
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}

void DetectionTest::SetUp()
{
    m_netConnService = GetProxy();
    if (m_netConnService == nullptr) {
        std::cout << "register service fail, TestNetDetection m_netConnService is nullptr" << std::endl;
        ASSERT_TRUE(false);
    }
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}

void DetectionTest::TearDown()
{
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}

} // namespace NetManagerStandard
}  //namespace OHOS
#endif // DETECTION_TEST_H