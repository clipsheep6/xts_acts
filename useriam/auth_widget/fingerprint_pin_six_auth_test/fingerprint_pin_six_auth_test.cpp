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

namespace OHOS {
namespace UserIam {
namespace AuthWidget {
using namespace testing::ext;
using namespace OHOS::Utils;
class ActsFingerprintPinSixAuthTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();

    const char *kdf = "scrypt";
    const char *salt = "U0FNUExFQQ==";
    const int32_t dkLen = 64;
    const int32_t n = 32768;
    const int32_t r = 3;
    const int32_t p = 1;
    // 123456
    const char *pinSixCode = "PgOdAHCS3fqd0eR26QxUu0lof5qaqiy/xIVrvsUqp4HOyeExHF3itjQSNqGVq5oj8Lop5M110ZT8G3//oq/rNQ==";
    const int32_t freezeSeconds = 10;
    Timer sendResultTimer {"FingerprintAuthResultTimer"};
    uint32_t sendDelay = 3000;
    bool isStop = false;

    void FingerprintPinAuthCallback(int32_t id, const std::string &event, const std::string &params);
    void SendFingerprintAuthResult(int32_t id);
    void HandleEventAuthTypeReady(int32_t id, const Json::Value &jsonParams);
    void HandleEventKeyDerivationReady(int32_t id, const Json::Value &jsonParams);
};

void ActsFingerprintPinSixAuthTest::SetUpTestCase(void)
{
}

void ActsFingerprintPinSixAuthTest::TearDownTestCase(void)
{
}

void ActsFingerprintPinSixAuthTest::SetUp()
{
}

void ActsFingerprintPinSixAuthTest::TearDown()
{
}

HWTEST_F(ActsFingerprintPinSixAuthTest, ActsFingerprintPinSixAuthTest, TestSize.Level1)
{
    EXPECT_EQ(TIMER_ERR_OK, sendResultTimer.Setup());
    const std::string params = R"({
        "type":[
            "fingerprint",
            "pin"
        ],
        "title": "使用指纹认证",
        "titleId": "useFingerprint",
        "cancelButton": "取消",
        "cancelButtonId": "cancel",
        "pinSubType": "PIN_SIX",
        "cmd": [
            {
                "cmd": "CMD_NOTIFY_AUTH_TIMES_LEFT",
                "payload": {
                    "type": "fingerprint",
                    "count": 3
                }
            },
            {
                "cmd": "CMD_NOTIFY_AUTH_TIMES_LEFT",
                "payload": {
                    "type": "pin",
                    "count": 3
                }
            }
        ]})";
    int32_t dialogId = -1;
    IAM_LOGI("ActsFingerprintPinSixAuthTest ShowDialog start");
    int32_t width = 0, height = 0;
    GetDisplaySize(width, height);
    IAM_LOGI("ActsFingerprintPinSixAuthTest ShowDialog width=%{public}d, height=%{public}d", width, height);
    Ace::UIServiceMgrClient::GetInstance()->ShowDialog("authentication_dialog", params,
        OHOS::Rosen::WindowType::WINDOW_TYPE_SYSTEM_ALARM_WINDOW, 0, 0, width, height,
        std::bind(&ActsFingerprintPinSixAuthTest::FingerprintPinAuthCallback, this, std::placeholders::_1,
            std::placeholders::_2, std::placeholders::_3),
        &dialogId);
    EXPECT_TRUE(dialogId >= 0);
    IAM_LOGI("ActsFingerprintPinSixAuthTest ShowDialog end, dialogId:%{public}d", dialogId);
    while (!isStop) {
        sleep(1);
    }
    sendResultTimer.Shutdown();
}

void ActsFingerprintPinSixAuthTest::FingerprintPinAuthCallback(int32_t id, const std::string &event,
    const std::string &params)
{
    IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback start");
    Json::CharReaderBuilder readBuilder;
    const std::unique_ptr<Json::CharReader> reader(readBuilder.newCharReader());
    ASSERT_NE(reader, nullptr);
    JSONCPP_STRING errs;
    Json::Value jsonParams;
    bool ret = reader->parse(params.c_str(), params.c_str() + params.length(), &jsonParams, &errs);
    ASSERT_TRUE(ret);
    ASSERT_TRUE(errs.empty());
    JsEventType eventType = GetJsEventType(event);
    ASSERT_LT(eventType, JsEventType::NUM_OF_EVENT_TYPE);
    switch (eventType) {
        case JsEventType::EVENT_AUTH_TYPE_READY: {
            IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback EVENT_AUTH_TYPE_READY");
            HandleEventAuthTypeReady(id, jsonParams);
            break;
        }
        case JsEventType::EVENT_AUTH_USER_CANCEL: {
            IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback EVENT_AUTH_USER_CANCEL");
            break;
        }
        case JsEventType::EVENT_AUTH_USER_CANCEL_ALL: {
            IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback EVENT_AUTH_USER_CANCEL_ALL");
            Ace::UIServiceMgrClient::GetInstance()->CancelDialog(id);
            isStop = true;
            break;
        }
        case JsEventType::EVENT_ANIMATION_PLAY_END: {
            IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback EVENT_ANIMATION_PLAY_END");
            Ace::UIServiceMgrClient::GetInstance()->CancelDialog(id);
            isStop = true;
            break;
        }
        case JsEventType::EVENT_KEY_DERIVATION_READY: {
            IAM_LOGI("ActsFingerprintPinSixAuthTest FingerprintPinAuthCallback EVENT_KEY_DERIVATION_READY");
            HandleEventKeyDerivationReady(id, jsonParams);
            break;
        }
        default:
            break;
    }
}

void ActsFingerprintPinSixAuthTest::SendFingerprintAuthResult(int32_t id)
{
    static int32_t fingerprintTimesLeft = 3;
    --fingerprintTimesLeft;
    Json::StreamWriterBuilder resultBuilder;
    std::ostringstream resultOss;
    std::unique_ptr<Json::StreamWriter> resultWriter(resultBuilder.newStreamWriter());
    ASSERT_NE(resultWriter, nullptr);
    Json::Value resultArray;
    Json::Value resultCmd;
    Json::Value resultPayload;
    if (fingerprintTimesLeft == 0) {
        // CMD_NOTIFY_AUTH_SUCCESS
        resultCmd["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_SUCCESS);
        resultPayload["type"] = "fingerprint";
        resultCmd["payload"] = resultPayload;
        resultArray.append(resultCmd);
    } else {
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
    }
    resultWriter->write(resultArray, &resultOss);
    IAM_LOGI("ActsFingerprintPinSixAuthTest SendFingerprintAuthResult %{public}s", resultOss.str().c_str());
    Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, resultOss.str());
}

void ActsFingerprintPinSixAuthTest::HandleEventAuthTypeReady(int32_t id, const Json::Value &jsonParams)
{
    Json::StreamWriterBuilder writerBuilder;
    std::ostringstream oss;
    std::unique_ptr<Json::StreamWriter> writer(writerBuilder.newStreamWriter());
    ASSERT_NE(writer, nullptr);
    Json::Value cmdArray;
    Json::Value startCmd;
    Json::Value startPayload;
    if (strcmp(jsonParams["payload"]["type"].asCString(), "fingerprint") == 0) {
        // CMD_NOTIFY_AUTH_START
        startCmd["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_START);
        startPayload["type"] = "fingerprint";
        startCmd["payload"] = startPayload;
        cmdArray.append(startCmd);
        writer->write(cmdArray, &oss);
        IAM_LOGI("ActsFingerprintPinSixAuthTest HandleEventAuthTypeReady %{public}s", oss.str().c_str());
        Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, oss.str());
        sendResultTimer.Register(std::bind(&ActsFingerprintPinSixAuthTest::SendFingerprintAuthResult, this, id),
            sendDelay, true);
    } else if (strcmp(jsonParams["payload"]["type"].asCString(), "pin") == 0) {
        // CMD_NOTIFY_AUTH_START
        startCmd["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_START);
        startPayload["type"] = "pin";
        startCmd["payload"] = startPayload;
        cmdArray.append(startCmd);
        // CMD_GET_KEY_DERIVATION_DATA
        Json::Value dataValue;
        Json::Value dataPayload;
        dataValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_GET_KEY_DERIVATION_DATA);
        dataPayload["kdf"] = kdf;
        dataPayload["salt"] = salt;
        dataPayload["dkLen"] = dkLen;
        dataPayload["N"] = n;
        dataPayload["r"] = r;
        dataPayload["p"] = p;
        dataValue["payload"] = dataPayload;
        cmdArray.append(dataValue);
        writer->write(cmdArray, &oss);
        IAM_LOGI("ActsFingerprintPinSixAuthTest HandleEventAuthTypeReady %{public}s", oss.str().c_str());
        Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, oss.str());
    }
}

void ActsFingerprintPinSixAuthTest::HandleEventKeyDerivationReady(int32_t id, const Json::Value &jsonParams)
{
    if (strcmp(jsonParams["payload"]["result"].asCString(), "success") == 0) {
        Json::StreamWriterBuilder writerBuilder;
        std::ostringstream oss;
        std::unique_ptr<Json::StreamWriter> writer(writerBuilder.newStreamWriter());
        ASSERT_NE(writer, nullptr);
        Json::Value resultValue;
        Json::Value resultPayload;
        Json::Value cmdArray;
        IAM_LOGI("ActsFingerprintPinSixAuthTest HandleEventKeyDerivationReady derivation data %{public}s",
            jsonParams["payload"]["derivation"].asCString());
        if (strcmp(jsonParams["payload"]["derivation"].asCString(), pinSixCode) == 0) {
            IAM_LOGI("ActsFingerprintPinSixAuthTest HandleEventKeyDerivationReady pin auth success");
            resultValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_SUCCESS);
            resultPayload["type"] = "pin";
            resultValue["payload"] = resultPayload;
            cmdArray.append(resultValue);
            writer->write(cmdArray, &oss);
            Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, oss.str());
        } else {
            Json::Value timesValue;
            Json::Value timesPayload;
            resultValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_FAILED);
            resultPayload["type"] = "pin";
            resultValue["payload"] = resultPayload;
            cmdArray.append(resultValue);
            timesValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_TIMES_LEFT);
            timesPayload["type"] = "pin";
            static int32_t pinTimesLeft = 3;
            --pinTimesLeft;
            timesPayload["count"] = pinTimesLeft;
            timesValue["payload"] = timesPayload;
            IAM_LOGI(
                "ActsFingerprintPinSixAuthTest HandleEventKeyDerivationReady pin auth failed, times left:%{public}d",
                pinTimesLeft);
            cmdArray.append(timesValue);
            if (pinTimesLeft <= 0) {
                Json::Value freezeValue;
                Json::Value freezePayload;
                freezeValue["cmd"] = GetJsCmdTypeStr(JsCmdType::CMD_NOTIFY_AUTH_FREEZE);
                freezePayload["type"] = "pin";
                freezePayload["seconds"] = freezeSeconds;
                freezeValue["payload"] = freezePayload;
                cmdArray.append(freezeValue);
            }
            writer->write(cmdArray, &oss);
            Ace::UIServiceMgrClient::GetInstance()->UpdateDialog(id, oss.str());
        }
    }
}
} // namespace AuthWidget
} // namespace UserIam
} // namespace OHOS