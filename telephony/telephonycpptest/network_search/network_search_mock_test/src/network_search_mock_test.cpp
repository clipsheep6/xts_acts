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

#define NETWORSEARCH_MOCK_TEST
#include "network_search_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0800
 * @tc.name    Obtain the current network type is GSM, Lac is 10138, CellId is 5141, Arfcn is 589, Bsic is 54, Mcc is
 *             460, Mnc is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0800, Function | MediumTest | Level3)
{
    int lac = 10138;
    int cellId = 5141;
    int arfcn = 589;
    int bsic = 54;
    int mcc = 460;
    int mnc = 0;
    g_mockVender.MockVendorSetCellInfo(
        static_cast<int>(CellInformation::CellType::CELL_TYPE_GSM), lac, cellId, arfcn, bsic, mcc, mnc);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_0);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0800 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_GSM) {
            GsmCellInformation *gsm = reinterpret_cast<GsmCellInformation *>(cellList.GetRefPtr());
            EXPECT_TRUE(gsm->GetLac() == lac && gsm->GetCellId() == cellId && gsm->GetArfcn() == arfcn &&
                        gsm->GetBsic() == bsic && gsm->GetMcc() == mcc && gsm->GetMnc() == mnc);
            LOG("GSM String: %s", gsm->ToString().c_str());
        } else {
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0900
 * @tc.name    Obtain the current network type is WCDMA, Lac is 0, CellId is 0, Arfcn is 4584, Bsic is 0, Mcc is
 *             460, Mnc is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0900, Function | MediumTest | Level3)
{
    int lac = 0;
    int cellId = 0;
    int arfcn = 4584;
    int psc = 0;
    int mcc = 460;
    int mnc = 0;
    g_mockVender.MockVendorSetCellInfo(
        static_cast<int>(CellInformation::CellType::CELL_TYPE_WCDMA), lac, cellId, arfcn, psc, mcc, mnc);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_0);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_0900 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_WCDMA) {
            WcdmaCellInformation *wcdma = reinterpret_cast<WcdmaCellInformation *>(cellList.GetRefPtr());
            EXPECT_TRUE(wcdma->GetLac() == lac && wcdma->GetCellId() == cellId && wcdma->GetArfcn() == arfcn &&
                        wcdma->GetPsc() == psc && wcdma->GetMcc() == mcc && wcdma->GetMnc() == mnc);
            LOG("WCDMA String: %s", wcdma->ToString().c_str());
        } else {
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_1000
 * @tc.name    Obtain the current network type is LTE, Lac is 9537, CellId is 116978985, Arfcn is 25600, Bsic is 253,
 *             Mcc is 460, Mnc is 1
 * @tc.desc    Function test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_1000, Function | MediumTest | Level3)
{
    int tac = 9537;
    int cellId = 116978985;
    int arfcn = 25600;
    int pci = 253;
    int mcc = 460;
    int mnc = 1;
    g_mockVender.MockVendorSetCellInfo(
        static_cast<int>(CellInformation::CellType::CELL_TYPE_LTE), tac, cellId, arfcn, pci, mcc, mnc);
    std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_0);
    ASSERT_FALSE(cellInfoList.empty());
    CellInformation::CellType type;
    for (const auto &cellList : cellInfoList) {
        ASSERT_NE(cellList, nullptr);
        type = cellList->GetNetworkType();
        LOG("Telephony_NetworkSearch_GetCellInfoList_1000 type:%d", static_cast<int32_t>(type));
        if (type == CellInformation::CellType::CELL_TYPE_LTE) {
            LteCellInformation *lte = reinterpret_cast<LteCellInformation *>(cellList.GetRefPtr());
            EXPECT_TRUE(lte->GetTac() == tac && lte->GetCellId() == cellId && lte->GetArfcn() == arfcn &&
                        lte->GetPci() == pci && lte->GetMcc() == mcc && lte->GetMnc() == mnc);
            LOG("LTE String: %s", lte->ToString().c_str());
        } else {
            LOG("GetCellInfoList is RAT_TYPE_NONE");
        }
    }
}