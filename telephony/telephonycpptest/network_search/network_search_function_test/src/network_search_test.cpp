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

#define NETWORSEARCH_FUNCTION_TEST
#include "network_search_test.h"
#include "network_search_state.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0100
 * @tc.name    The slot id is 0 to test the GetCellInfoList() and the result is current network list
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0100, Function | MediumTest | Level3)
{
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_0);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0100 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_GSM) {
            GsmCellInformation *gsm = reinterpret_cast<GsmCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(gsm->GetLac(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetLac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(gsm->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetCellId(), CELL_INFO_GSM_CELLID_MAX);
            EXPECT_GE(gsm->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetArfcn(), CELL_INFO_ARFCN_MAX);
            EXPECT_GE(gsm->GetBsic(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetBsic(), CELL_INFO_BSIC_MAX);
            EXPECT_EQ(gsm->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(gsm->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(gsm->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("GSM String: %s", gsm->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_WCDMA) {
            WcdmaCellInformation *wcdma = reinterpret_cast<WcdmaCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(wcdma->GetLac(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetLac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(wcdma->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetCellId(), CELL_INFO_WCDMA_CELLID_MAX);
            EXPECT_GE(wcdma->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetArfcn(), CELL_INFO_ARFCN_MAX);
            EXPECT_GE(wcdma->GetPsc(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetPsc(), CELL_INFO_PSC_MAX);
            EXPECT_EQ(wcdma->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(wcdma->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(wcdma->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("WCDMA String: %s", wcdma->ToString().c_str());
        } else if (type == CellInformation::CellType::CELL_TYPE_LTE) {
            LteCellInformation *lte = reinterpret_cast<LteCellInformation *>(cellList.GetRefPtr());
            EXPECT_GE(lte->GetTac(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetTac(), CELL_INFO_LAC_TAC_MAX);
            EXPECT_GE(lte->GetCellId(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetCellId(), CELL_INFO_LTE_CELLID_MAX);
            EXPECT_GE(lte->GetArfcn(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetArfcn(), CELL_INFO_EARFCN_MAX);
            EXPECT_GE(lte->GetPci(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetPci(), CELL_INFO_PCI_MAX);
            EXPECT_EQ(lte->GetMcc(), CELL_INFO_MCC);
            EXPECT_GE(lte->GetMnc(), CELL_INFO_MIN);
            EXPECT_LE(lte->GetMnc(), CELL_INFO_MNC_MAX);
            LOG("LTE String: %s", lte->ToString().c_str());
        } else {
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0200
 * @tc.name    The slot id is 1 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0200, Function | MediumTest | Level3)
{
    int slotId = 1;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0300
 * @tc.name    The slot id is -1 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0300, Function | MediumTest | Level3)
{
    int slotId = -1;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0400
 * @tc.name    The slot id is 2 to test the GetCellInfoList() is wrong and return is empty
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0400, Function | MediumTest | Level3)
{
    int slotId = 2;
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(slotId);
    EXPECT_TRUE(cellInfoList.empty());
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0100
 * @tc.name    Test the SendUpdateCellLocationRequest() and the result is true
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0100, Function | MediumTest | Level3)
{
    bool requestResult = GetProxy()->SendUpdateCellLocationRequest();
    EXPECT_TRUE(requestResult);
}
