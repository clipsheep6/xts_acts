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

#include "wifi_test.h"
#include <iostream>
#include "log.h"
#include "time_count_helper.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/**
 * @tc.number   Telephony_NetworkManager_TetherByIface_0100
 * @tc.name     Enable AP, verify iface as "wlan0", test TetherByIface() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByIface_0100, Function | MediumTest | Level2)
{
    std::string iface = "wlan0";
    OHOS::Wifi::ApService *apService;
    int32_t enableResult = apService->EnableHotspot();
    EXPECT_EQ(enableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);

    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
    EXPECT_EQ(result, TetherResultCode::TETHERING_NO_ERR);

    // Restore
    int32_t disableResult = apService->DisableHotspot();
    EXPECT_EQ(disableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByIface_0200
 * @tc.name     Verify iface as "test", test TetherByIface() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByIface_0200, Function | MediumTest | Level2)
{
    std::string iface = "test";
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_UNKNOWN_IFACE_ERROR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByIface_0300
 * @tc.name     Disable AP, verify iface as "wlan0", test TetherByIface() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByIface_0300, Function | MediumTest | Level2)
{
    std::string iface = "wlan0";
    OHOS::Wifi::ApService *apService;
    int32_t disableResult = apService->DisableHotspot();
    EXPECT_EQ(disableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);

    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_UNKNOWN_IFACE_ERROR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByIface_0400
 * @tc.name     WIFI sharing is enabled. Test TetherByIface() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByIface_0400, Function | MediumTest | Level2)
{
    std::string iface = "wlan0";
    int32_t enableResult =
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    EXPECT_EQ(enableResult, TetherResultCode::TETHERING_NO_ERR);

    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_UNKNOWN_IFACE_ERROR);

    // Restore
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByIface_0100
 * @tc.name     WIFIi sharing is enabled. Verify that iFace is "wlan0". Test UntetherByIface() to check the return
 *              value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByIface_0100, Function | MediumTest | Level2)
{
    std::string iface = "wlan0";
    int32_t enableResult =
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    EXPECT_EQ(enableResult, TetherResultCode::TETHERING_NO_ERR);

    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);

    // Restore
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByIface_0200
 * @tc.name     Verify iface as "test", test UntetherByIface() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByIface_0200, Function | MediumTest | Level2)
{
    std::string iface = "test";
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_UNKNOWN_IFACE_ERROR);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByIface_0300
 * @tc.name     WIFI sharing is not enabled, check iface as "wlan0", test UntetherByIface() to check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByIface_0300, Function | MediumTest | Level2)
{
    std::string iface = "wlan0";
    OHOS::Wifi::ApService *apService;
    int32_t disableResult = apService->DisableHotspot();
    EXPECT_EQ(disableResult, OHOS::Wifi::ErrCode::WIFI_OPT_SUCCESS);

    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByIface(iface);
    ASSERT_EQ(result, TetherResultCode::TETHERING_UNAVAIL_IFACE_ERROR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0100
 * @tc.name     If type is "TETHERING_WIFI", test TetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0100, Function | MediumTest | Level2)
{
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0200
 * @tc.name     If type is "TETHERING_INVALID", test TetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0200, Function | MediumTest | Level2)
{
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_INVALID);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0300
 * @tc.name     If type is "-1", test TetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0300, Function | MediumTest | Level2)
{
    int type = -1;
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType((TetheringType)type);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0400
 * @tc.name     If type is "4", test TetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0400, Function | MediumTest | Level2)
{
    int type = 4;
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType((TetheringType)type);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_TetherByType_0500
 * @tc.name     Wifi sharing is enabled. The check type is "TETHERING_WIFI". Test TetherByType() to
 *              check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_TetherByType_0500, Function | MediumTest | Level2)
{
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    result = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TETHER_ALREADY_OPEN);
}


/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0100
 * @tc.name     Wifi sharing is enabled. Check type is "TETHERING_WIFI". Test UntetherByType() to check the returned
 *              value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0100, Function | MediumTest | Level2)
{
    int32_t ret = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(TetheringType::TETHERING_WIFI);
    EXPECT_EQ(ret, TetherResultCode::TETHERING_NO_ERR);
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_WIFI);
    ASSERT_EQ(result, TetherResultCode::TETHERING_NO_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0200
 * @tc.name     If type is "TETHERING_INVALID", test UntetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0200, Function | MediumTest | Level2)
{
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_INVALID);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0300
 * @tc.name     If type is "-1", test UntetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0300, Function | MediumTest | Level2)
{
    int type = -1;
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType((TetheringType)type);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0400
 * @tc.name     If type is "4", test UntetherByType() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0400, Function | MediumTest | Level2)
{
    int type = 4;
    int32_t result = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType((TetheringType)type);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TYPE_ERR);
}

/**
 * @tc.number   Telephony_NetworkManager_UntetherByType_0500
 * @tc.name     Wifi sharing has been cancelled. Check type is "TETHERING_WIFI". Test UntetherByType() to
 *              check the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_UntetherByType_0500, Function | MediumTest | Level2)
{
    int32_t ret = DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_WIFI);
    EXPECT_EQ(ret, TetherResultCode::TETHERING_NO_ERR);
    int32_t result =
        DelayedSingleton<NetTetherClient>::GetInstance()->UntetherByType(TetheringType::TETHERING_WIFI);
    ASSERT_EQ(result, TetherResultCode::TETHERING_TETHER_NOT_OPEN);
}

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0100
 * @tc.name     Verify state is "true" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0100, Function | MediumTest | Level2)
{
    bool state = true;
    int32_t expect = 0;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    EXPECT_EQ(ret, expect);
}

/**
 * @tc.number   Telephony_NetworkManager_SetAirplaneMode_0200
 * @tc.name     Verify state is "false" and test SetAirplaneMode() to see the return value.
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_SetAirplaneMode_0200, Function | MediumTest | Level2)
{
    bool state = false;
    int32_t expect = 0;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->SetAirplaneMode(state);
    EXPECT_EQ(ret, expect);
}

/**
 * @tc.number   Telephony_NetworkManager_RegisterTetheringEventCallback_0100
 * @tc.name     test RegisterTetheringEventCallback
 * @tc.desc     Function test
 */
HWTEST_F(WIFITest, Telephony_NetworkManager_RegisterTetheringEventCallback_0100, Function | MediumTest | Level2)
{
    DelayedSingleton<NetTetherClient>::GetInstance()->RegisterTetheringEventCallback(g_callback);
    TetheringType type = TetheringType::TETHERING_WIFI;
    int32_t ret = DelayedSingleton<NetTetherClient>::GetInstance()->TetherByType(type);
    ASSERT_EQ(ret, 0);
}
} // namespace NetManagerStandard
} // namespace OHOS