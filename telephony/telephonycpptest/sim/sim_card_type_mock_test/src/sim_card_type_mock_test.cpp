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

#include <cstring>
#include "log.h"
#include "time_count_helper.h"
#include "sim_test.h"
#include "sim_card_type_mock_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;

/**
 * @tc.number   Telephony_Sim_GetCardType_0800
 * @tc.name     When the card type is SINGLE_MODE_SIM_CARD, the GetCardType interface is called to get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_0800, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to SINGLE_MODE_SIM_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::SINGLE_MODE_SIM_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_SIM_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0900
 * @tc.name     When the card type is SINGLE_MODE_RUIM_CARD, the GetCardType interface is called to get the return
 *              value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_0900, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to SINGLE_MODE_RUIM_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::SINGLE_MODE_RUIM_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_RUIM_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1000
 * @tc.name     When the card type is DUAL_MODE_CG_CARD, the GetCardType interface is called to get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1000, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to DUAL_MODE_CG_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::DUAL_MODE_CG_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::DUAL_MODE_CG_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1100
 * @tc.name     When the card type is CT_NATIONAL_ROAMING_CARD, the GetCardType interface is called to get the return
 *              value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1100, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to CT_NATIONAL_ROAMING_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::CT_NATIONAL_ROAMING_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::CT_NATIONAL_ROAMING_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1200
 * @tc.name     When the card type is China Mobile multi-mode card, the GetCardType interface is called to
 *              get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1200, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to China Mobile multi-mode card.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::DUAL_MODE_TELECOM_LTE_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::DUAL_MODE_TELECOM_LTE_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1300
 * @tc.name     When the card type is DUAL_MODE_UG_CARD, the GetCardType interface is called to get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1300, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to DUAL_MODE_UG_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::DUAL_MODE_UG_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::DUAL_MODE_UG_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1400
 * @tc.name     The test card type is SINGLE_MODE_ISIM_CARD. Call GetCardType interface to get the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1400, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to SINGLE_MODE_ISIM_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::SINGLE_MODE_ISIM_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_ISIM_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_1500
 * @tc.name     The test card type is CU_DUAL_MODE_CARD. Call GetCardType to obtain the returned value.
 * @tc.desc     Function test
 */
HWTEST_F(SimCardTypeMockTest, Telephony_Sim_GetCardType_1500, Function | MediumTest | Level3)
{
    // Call the analog vendor library interface to pre-set the card type to CU_DUAL_MODE_CARD.
    g_mockCardType->MockVendorSetCardType((int)OHOS::Telephony::CardType::CU_DUAL_MODE_CARD);

    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::CU_DUAL_MODE_CARD);
}
