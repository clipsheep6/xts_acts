/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>

#include <memory>

#include "auth_widget_test.h"
#include "common_timer_errors.h"
#include "iam_logger.h"
#include "timer.h"
#include "ui_service_mgr_client.h"
#include "json/json.h"

#define LOG_LABEL UserIam::Common::LABEL_AUTH_WIDGET_AUTH_SDK

using namespace OHOS::Utils;
namespace OHOS {
namespace UserIam {
namespace AuthWidget {
using namespace testing::ext;
using namespace OHOS::Utils;
class ActsFingerprintAuthFailedTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();

    Timer sendResultTimer {"FingerprintAuthResultTimer"};
    uint32_t sendDelay = 3000;
    bool isStop = false;

    void FingerprintAuthCallback(int32_t id, const std::string &event, const std::string &params);
    void SendFingerprintAuthResult(int32_t id);
    void HandleEventAuthTypeReady(int32_t id);
};

void ActsFingerprintAuthFailedTest::SetUpTestCase(void)
{
}

void ActsFingerprintAuthFailedTest::TearDownTestCase(void)
{
}

void ActsFingerprintAuthFailedTest::SetUp()
{
}

void ActsFingerprintAuthFailedTest::TearDown()
{
}

HWTEST_F(ActsFingerprintAuthFailedTest, ActsFingerprintAuthFailedTest, TestSize.Level1)
{
    EXPECT_EQ(TIMER_ERR_OK, sendResultTimer.Setup());
    const std::string params = R"({
        "type":["fingerprint"],
        "title": "使用指纹认证",
        "titleId": "useFingerprint",
        "cancelButton": "取消",
        "cancelButtonId": "cancel",
        "cmd": [
            {
                "cmd": "CMD_NOTIFY_AUTH_TIMES_LEFT",
                "payload": {
                    "type": "fingerprint",
                    "count": 3
                }
            }
        ]})";
    int32_t dialogId = -1;
    IAM_LOGI("ActsFingerprintAuthFailedTest:: ShowDialog start");
    int32_t width = 0, height = 0;
    GetDisplaySize(width, height);
    IAM_LOGI("ActsFingerprintAuthFailedTest ShowDialog width=%{public}d, height=%{public}d", width, height);
    Ace::UIServiceMgrClient::GetInstance()->ShowDialog("authentication_dialog", params,
        OHOS::Rosen::WindowType::WINDOW_TYPE_SYSTEM_ALARM_WINDOW, 0, 0, width, height,
        std::bind(&ActsFingerprintAuthFailedTest::FingerprintAuthCallback, this, std::placeholders::_1,
            std::placeholders::_2, std::placeholders::_3),
        &dialogId);
    EXPECT_TRUE(dialogId >= 0);
    IAM_LOGI("ActsFingerprintAuthFailedTest:: ShowDialog end, dialogId:%{public}d", dialogId);
    while (!isStop) {
        sleep(1);
    }
    sendResultTimer.Shutdown();
}

void ActsFingerprintAuthFailedTest::FingerprintAuthCallback(int32_t id, const std::string &event,
    const std::string &params)
{
    IAM_LOGI("ActsFingerprintAuthFailedTest FingerprintAuthCallback start");
    Json::CharReaderBuilder readBuilder;
    const std::unique_ptr<Json::CharReader> reader(readBuilder.newCharReader());
    ASSERT_NE(reader, nullptr);
    JSONCPP_STRING errs;
    Json::Value jsonParams;
    bool ret = reader->parse(params.c_str(), params.c_str() + params.length(), &jsonParams, &errs);
    ASSERT_TRUE(ret);
    ASSERT_TRUE(errs.empty());
    JsEventType eventType = GetJsEventType(event);
    ASSERT_NE(eventType, JsEventType::EVENT_KEY_DERIVATION_READY);
    ASSERT_LT(eventType, JsEventType::NUM_OF_EVENT_TYPE);
    switch (eventType) {
        case JsEventType::EVENT_AUTH_TYPE_READY: {
            IAM_LOGI("ActsFingerprintAuthFailedTest FingerprintAuthCallback EVENT_AUTH_TYPE_READY");
            HandleEventAuthTypeReady(id);
            break;
        }
        case JsEventType::EVENT_AUTH_USER_CANCEL:
        case JsEventType::EVENT_AUTH_USER_CANCEL_ALL: {
            IAM_LOGI("ActsFingerprintAuthFailedTest FingerprintAuthCallback "
                     "EVENT_AUTH_USER_CANCEL/EVENT_AUTH_USER_CANCEL_ALL");
            Ace::UIServiceMgrClient::GetInstance()->CancelDialog(id);
            isStop = true;
            break;
        }
        case JsEventType::EVENT_ANIMATION_PLAY_END: {
            IAM_LOGI("ActsFingerprintAuthFailedTest FingerprintAuthCallback EVENT_ANIMATION_PLAY_END");
            Ace::UIServiceMgrClient::GetInstance()->CancelDialog(id);
            isStop = true;
            break;
        }
        default:
            break;
    }
}

void ActsFingerprintAuthFailedTest::SendFingerprintAuthResult(int32_t id)
{
    static int32_t fingerprintTimesLeft = 3;
    --fingerprintTimesLeft;
    if (fingerprintTimesLeft <= 0) {
        fingerprintTimesLeft = 0;
    }

    Json::StreamWriterBuilder resultBuilder;
    std::ostringstream resultOss;
    std::unique_ptr<Json::StreamWriter> resultWriter(resultBuilder.newStreamWriter());
    ASSERT_NE(resultWriter, nullptr);
    Json::Value resultArray;
    Json::Value resultCmd;
    Json::Value resultPayload;
    // CMD_NOTIFY_AUTH_FAILED
    resultCmd["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_FAILED);
    resultPayload["type"] = "fingerprint";
    resultCmd["payload"] = resultPayload;
    resultArray.append(resultCmd);
    Json::Value timesValue;
    Json::Value timesPayload;
    // CMD_NOTIFY_AUTH_TIMES_LEFT
    timesValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_TIMES_LEFT);
    timesPayload["type"] = "fingerprint";
    timesPayload["count"] = fingerprintTimesLeft;
    timesValue["payload"] = timesPayload;
    resultArray.append(timesValue);
    resultWriter->write(resultArray, &resultOss);
    IAM_LOGI("ActsFingerprintAuthFailedTest SendFingerprintAuthResult %{public}s", resultOss.str().c_str());
    Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, resultOss.str());
}

void ActsFingerprintAuthFailedTest::HandleEventAuthTypeReady(int32_t id)
{
    Json::StreamWriterBuilder writerBuilder;
    std::ostringstream oss;
    std::unique_ptr<Json::StreamWriter> writer(writerBuilder.newStreamWriter());
    ASSERT_NE(writer, nullptr);
    Json::Value cmdArray;
    Json::Value startCmd;
    Json::Value startPayload;
    // CMD_NOTIFY_AUTH_START
    startCmd["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_START);
    startPayload["type"] = "fingerprint";
    startCmd["payload"] = startPayload;
    cmdArray.append(startCmd);
    writer->write(cmdArray, &oss);
    IAM_LOGI("ActsFingerprintAuthFailedTest HandleEventAuthTypeReady %{public}s", oss.str().c_str());
    Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, oss.str());
    sendResultTimer.Register(std::bind(&ActsFingerprintAuthFailedTest::SendFingerprintAuthResult, this, id), sendDelay,
        true);
}
} // namespace AuthWidget
} // namespace UserIam
} // namespace OHOS