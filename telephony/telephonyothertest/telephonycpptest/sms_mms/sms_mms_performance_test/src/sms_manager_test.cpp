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

#include "mms_manager_test.h"
#include <cstdio>
#include <cstring>
#include <securec.h>
#include "mms_codec_type.h"
#include "string_ex.h"
#include "time_count_helper.h"
#include "condition_lock.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::MmsManager;
using namespace MmsManager;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_1200
 * @tc.name     Cycle call DecodeMsg interface LOOP_MULTITUDE_NUMBER times,
 *              normal entry parameter, check the average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_1200, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg decodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        decodeMsg.DecodeMsg(strPath);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_EncodeMsg_2000
 * @tc.name     The EncodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_EncodeMsg_2000, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.EncodeMsg(len);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_DecodeMsg_PDU_0200
 * @tc.name     The DecodeMsg interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_DecodeMsg_PDU_0200, Performance | MediumTest | Level1)
{
    std::string strPath = "/data/telephony/deSrc/ReadOrigInd.mms";
    MmsMsg encodeMsg;
    EXPECT_TRUE(encodeMsg.SetMmsMessageType(MMS_MSGTYPE_NOTIFYRESP_IND));
    EXPECT_TRUE(encodeMsg.SetMmsTransactionId("2920.1410"));
    EXPECT_TRUE(encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_0)));
    EXPECT_TRUE(encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_UNREACHABLE)));
    uint32_t len = 0;
    std::unique_ptr<char[]> result = encodeMsg.EncodeMsg(len);
    ASSERT_TRUE(result != nullptr);

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        MmsMsg decodeMsg;
        encodeMsg.DecodeMsg(std::move(result), len);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsVersion_0400
 * @tc.name     The SetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsVersion_0400, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsVersion(static_cast<uint16_t>(MmsVersionType::MMS_VERSION_1_2));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsVersion_0200
 * @tc.name     The GetMmsVersion interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsVersion_0200, Performance | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsVersion();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsMessageType_0400
 * @tc.name     The SetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsMessageType_0400, Performance | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    MmsMsg encodeMsg;
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsMessageType(MMS_MSGTYPE_SEND_REQ);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsMessageType_0200
 * @tc.name     The GetMmsMessageType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsMessageType_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsMessageType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTransactionId_0300
 * @tc.name     The SetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTransactionId_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsTransactionId("2077.1427358451410");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTransactionId_0200
 * @tc.name     The GetMmsTransactionId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTransactionId_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsTransactionId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsDate_0200
 * @tc.name     The SetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsDate_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsDate(1639378126);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsDate_0200
 * @tc.name     The GetMmsDate interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsDate_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsDate();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsSubject_0300
 * @tc.name     The SetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsSubject_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsSubject("Test mms");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsSubject_0200
 * @tc.name     The GetMmsSubject interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsSubject_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsSubject();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsFrom_0200
 * @tc.name     The SetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsFrom_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress fromAddress;
    fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsFrom(fromAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsFrom_0200
 * @tc.name     The GetMmsFrom interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsFrom_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsFrom();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsTo_0200
 * @tc.name     The SetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsTo_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetMmsTo(vecAddrs);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetMmsTo_0200
 * @tc.name     The GetMmsTo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetMmsTo_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAddress> vecAddrs;
    MmsAddress toAddrs("+8613888888888/TYPE=PLMN");
    vecAddrs.push_back(toAddrs);
    EXPECT_TRUE(encodeMsg.SetMmsTo(vecAddrs));
    std::vector<MmsAddress> toAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetMmsTo(toAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderOctetValue_2100
 * @tc.name     The SetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderOctetValue_2100, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderOctetValue(MMS_STATUS, static_cast<uint8_t>(MmsStatus::MMS_MMS_UNRECOGNISED));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderOctetValue_0200
 * @tc.name     The GetHeaderOctetValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderOctetValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderOctetValue(MMS_STATUS);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderIntegerValue_0300
 * @tc.name     The SetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderIntegerValue_0300, Performance | MediumTest | Level1)
{
    int32_t value = 100;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderIntegerValue(MMS_LIMIT, value);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderIntegerValue_0200
 * @tc.name     The GetHeaderIntegerValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderIntegerValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderIntegerValue(MMS_LIMIT);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderLongValue_0200
 * @tc.name     The SetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderLongValue_0200, Performance | MediumTest | Level1)
{
    int32_t value = 123456;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderLongValue(MMS_MESSAGE_SIZE, value);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderLongValue_0200
 * @tc.name     The GetHeaderLongValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderLongValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderLongValue(MMS_MESSAGE_SIZE);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderStringValue_0300
 * @tc.name     The SetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderStringValue_0300, Performance | MediumTest | Level1)
{
    std::string strMessageID = "0001";
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderStringValue(MMS_MESSAGE_ID, strMessageID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderStringValue_0200
 * @tc.name     The GetHeaderStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderStringValue_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderStringValue(MMS_MESSAGE_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderEncodedStringValue_0300
 * @tc.name     The SetHeaderEncodedStringValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderEncodedStringValue_0300, Performance | MediumTest | Level1)
{
    std::string retrieveTest = "1000";
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderEncodedStringValue(
            MMS_RETRIEVE_TEXT, retrieveTest, static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_AddHeaderAddressValue_0300
 * @tc.name     The AddHeaderAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddHeaderAddressValue_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAddress ccAddress;
    ccAddress.SetMmsAddressString("+8613811111111/TYPE=PLMN");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.AddHeaderAddressValue(MMS_CC, ccAddress);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderAllAddressValue_0200
 * @tc.name     The GetHeaderAllAddressValue interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderAllAddressValue_0200, Performance | MediumTest | Level1)
{
    vector<MmsAddress> addressValue;
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderAllAddressValue(MMS_CC, addressValue);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetHeaderContentType_0300
 * @tc.name     The SetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetHeaderContentType_0300, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.SetHeaderContentType("application/vnd.wap.multipart.related");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentType_0200
 * @tc.name     The GetHeaderContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentType_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderContentType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetHeaderContentTypeStart_0200
 * @tc.name     The GetHeaderContentTypeStart interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetHeaderContentTypeStart_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetHeaderContentTypeStart();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_AddAttachment_0200
 * @tc.name     The AddAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_AddAttachment_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    MmsAttachment smilAttachment;
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    EXPECT_TRUE(smilAttachment.SetAttachmentFilePath(filePathNameSmil, true));
    EXPECT_TRUE(smilAttachment.SetFileName("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentId("<0000>"));
    EXPECT_TRUE(smilAttachment.SetContentLocation("618C0A89.smil"));
    EXPECT_TRUE(smilAttachment.SetContentType("application/smil"));
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.AddAttachment(smilAttachment);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAllAttachment_0200
 * @tc.name     The GetAllAttachment interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAllAttachment_0200, Performance | MediumTest | Level1)
{
    MmsMsg encodeMsg;
    std::vector<MmsAttachment> smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        encodeMsg.GetAllAttachment(smilAttachment);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetMmsAddressString_0200
 * @tc.name     The SetMmsAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetMmsAddressString_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.SetMmsAddressString("+8613812345678/TYPE=PLMN");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressString_0200
 * @tc.name     The GetAddressString interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressString_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressString();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressCharset_0200
 * @tc.name     The GetAddressCharset interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressCharset_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressCharset();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAddressType_0200
 * @tc.name     The GetAddressType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAddressType_0200, Performance | MediumTest | Level1)
{
    MmsAddress fromAddress;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        fromAddress.GetAddressType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetAttachmentFilePath_0300
 * @tc.name     The SetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetAttachmentFilePath_0300, Performance | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetAttachmentFilePath(filePathNameSmil, true);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetAttachmentFilePath_0200
 * @tc.name     The GetAttachmentFilePath interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetAttachmentFilePath_0200, Performance | MediumTest | Level1)
{
    const std::string filePathNameSmil = "/data/telephony/enSrc/618C0A89.smil";
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetAttachmentFilePath();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentId_0300
 * @tc.name     The SetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentId_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentId("<0000>");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentId_0200
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentId_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentLocation_0300
 * @tc.name     The SetContentLocation interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentLocation_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentLocation("618C0A89.smil");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentLocation_0200
 * @tc.name     The GetContentId interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentLocation_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentLocation();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentDisposition_0300
 * @tc.name     The SetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentDisposition_0300, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentDisposition("content.text");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentDisposition_0200
 * @tc.name     The GetContentDisposition interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentDisposition_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentDisposition();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentTransferEncoding_0300
 * @tc.name     The SetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentTransferEncoding_0300, Performance | MediumTest | Level1)
{
    std::string contentTransferEncoding = "base64";
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.SetContentTransferEncoding(contentTransferEncoding);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentTransferEncoding_0200
 * @tc.name     The GetContentTransferEncoding interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentTransferEncoding_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentTransferEncoding();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetContentType_0300
 * @tc.name     The SetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetContentType_0300, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetContentType("image/gif");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetContentType_0200
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetContentType_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetContentType();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetFileName_0300
 * @tc.name     The SetFileName interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetFileName_0300, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetFileName("content.text");
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetFileName_0200
 * @tc.name     The GetContentType interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetFileName_0200, Performance | MediumTest | Level1)
{
    MmsAttachment smilAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        smilAttachment.GetFileName();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetCharSet_0200
 * @tc.name     The SetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetCharSet_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.SetCharSet(static_cast<uint32_t>(MmsCharSets::UTF_8));
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetCharSet_0200
 * @tc.name     The GetCharSet interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetCharSet_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.GetCharSet();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_IsSmilFile_0200
 * @tc.name     The IsSmilFile interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_IsSmilFile_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.IsSmilFile();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_SetDataBuffer_0300
 * @tc.name     The SetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_SetDataBuffer_0300, Performance | MediumTest | Level1)
{
    MmsAttachment inBuffAttachment;
    uint32_t inBuffLen = 3;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        std::unique_ptr<char[]> inBuff = std::make_unique<char[]>(inBuffLen);
        memcpy_s(inBuff.get(), inBuffLen, "123", inBuffLen);
        inBuffAttachment.SetDataBuffer(std::move(inBuff), inBuffLen);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetDataBuffer_0200
 * @tc.name     The GetDataBuffer interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              with normal input parameters and average return time less than TIME_USEC_500
 * @tc.desc     Performance test
 */
HWTEST_F(MmsManagerTest, Telephony_SmsMms_GetDataBuffer_0200, Performance | MediumTest | Level1)
{
    MmsAttachment imageAttachment;
    uint32_t inBuffLen = 0;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        imageAttachment.GetDataBuffer(inBuffLen);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

#include "sms_manager_test.h"

using namespace OHOS::Telephony::SmsMmsManagerTest;
using namespace SmsMmsManagerTest;

/**
 * @tc.number   Telephony_SmsMms_IsImsSmsSupported_0300
 * @tc.name     The IsImsSmsSupported interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Performance test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_IsImsSmsSupported_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        SmsMmsManagerTest::g_smsClientPtr->GetPtr()->IsImsSmsSupported();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_HasSmsCapability_0300
 * @tc.name     The HasSmsCapability interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Performance test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_HasSmsCapability_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        SmsMmsManagerTest::g_smsClientPtr->GetPtr()->HasSmsCapability();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetImsShortMessageFormat_0400
 * @tc.name     The GetImsShortMessageFormat interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Performance test
 */
HWTEST_F(SmsConfigTest, Telephony_SmsMms_GetImsShortMessageFormat_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        SmsMmsManagerTest::g_smsClientPtr->GetPtr()->GetImsShortMessageFormat();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}

/**
 * @tc.number   Telephony_SmsMms_GetSmsSegmentsInfo_2200
 * @tc.name     The GetSmsSegmentsInfo interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
 *              and all parameters are normal. Check the returned result
 * @tc.desc     Performance test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_GetSmsSegmentsInfo_2200, Performance | MediumTest | Level3)
{
    ISmsServiceInterface::SmsSegmentsInfo result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
        message += "中";
    }
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; ++i) {
        SmsMmsManagerTest::g_smsClientPtr->GetPtr()->GetSmsSegmentsInfo(SLOT_ID_0, Str8ToStr16(message), false, result);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_MULTITUDE_NUMBER;
    LOGE("use %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC_500);
}