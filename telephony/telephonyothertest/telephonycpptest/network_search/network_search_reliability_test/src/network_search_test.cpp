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
 * @tc.number  Telephony_NetworkSearch_GetCellInfoList_0600
 * @tc.name    Test the  GetCellInfoList interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetCellInfoList_0600, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        std::vector<sptr<CellInformation>> cellInfoList = GetProxy()->GetCellInfoList(SLOT_0);
        ASSERT_FALSE(cellInfoList.empty());
        CellInformation::CellType type;
        for (const auto &cellList : cellInfoList) {
            ASSERT_NE(cellList, nullptr);
            type = cellList->GetNetworkType();
            LOG("Telephony_NetworkSearch_GetCellInfoList_0100 type:%d", static_cast<int32_t>(type));
            if (type == CellInformation::CellType::CELL_TYPE_GSM) {
                GsmCellInformation *gsm = reinterpret_cast<GsmCellInformation *>(cellList.GetRefPtr());
                LOG("GetCellInfoList is RAT_TYPE_GSM lac:%d bsic:%d", gsm->GetLac(), gsm->GetBsic());
            } else if (type == CellInformation::CellType::CELL_TYPE_WCDMA) {
                WcdmaCellInformation *wcdma = reinterpret_cast<WcdmaCellInformation *>(cellList.GetRefPtr());
                LOG("GetCellInfoList is RAT_TYPE_WCDMA lac:%d psc:%d", wcdma->GetLac(), wcdma->GetPsc());
            } else if (type == CellInformation::CellType::CELL_TYPE_LTE) {
                LteCellInformation *lte = reinterpret_cast<LteCellInformation *>(cellList.GetRefPtr());
                LOG("GetCellInfoList is RAT_TYPE_LTE tac:%d pci:%d", lte->GetTac(), lte->GetPci());
            } else {
                LOG("GetCellInfoList is RAT_TYPE_NONE");
            }
        }
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_SendUpdateCellLocationRequest_0300
 * @tc.name    Test the  SendUpdateCellLocationRequest interface query function executed 1000 times, each time the data
 * is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(
    NetworkSearchTest, Telephony_NetworkSearch_SendUpdateCellLocationRequest_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        bool requestResult = GetProxy()->SendUpdateCellLocationRequest();
        ASSERT_TRUE(requestResult);
    }
}