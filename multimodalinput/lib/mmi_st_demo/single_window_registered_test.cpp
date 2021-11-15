/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
 /**
 * @addtogroup multiInput
 * @{
 *
 * @brief Defines multiInput-related tests, including case data and functions for auto test,
 *
 * @since 1.0
 * @version 2.0
 */

#include <gtest/gtest.h>
#include "libmmi_util.h"
#include "st_data_process.h"
#include "st_helper.h"
#include "st_client_helper.h"

namespace {
using namespace testing::ext;
using namespace OHOS::MMI;
using namespace OHOS;

struct CaseInfo {
    std::vector<std::string> eventList = {""};
    std::vector<std::string> deviceMsg = {""};
    std::vector<std::string> libinputExpectList = {""};
    std::vector<std::string> standardExpectList = {""};
    std::vector<std::string> expectL3Event = {""};
    std::vector<std::vector<std::vector<std::string>>> combKeyList = {{{""}}};
    std::vector<std::string> dispatcherList = {""};
};

class SingleWindowRegisteredTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    
    void SetUp() override;
    void TearDown() override;
    
    void DoCompareAndExpect(const struct CaseInfo &ci, const std::string &caseId);
private:
    void ExpectCombKey(const std::vector<std::vector<std::vector<std::string>>> &combKeyList, const size_t i);
private:
    static StClientHelper st_client_helper_;
};

StClientHelper SingleWindowRegisteredTest::st_client_helper_;

void SingleWindowRegisteredTest::SetUpTestCase()
{
    printf("************************** SetUpTestCase *************************************\n");
    GetSTHelper().InitClient("Scene_C");
    sleep(5);
    st_client_helper_.StartStClient();
    sleep(3);
}


void SingleWindowRegisteredTest::TearDownTestCase(void)
{
    st_client_helper_.StopStClient();
}

void SingleWindowRegisteredTest::SetUp()
{
}

void SingleWindowRegisteredTest::TearDown()
{
    GetDataProcess().ClearAll();
}

/*
 * Feature: ExpectCombKey
 * Function: ExpectCombKey
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
void SingleWindowRegisteredTest::ExpectCombKey(const std::vector<std::vector<std::vector<std::string>>> &combKeyList, const size_t i)
{
    assert(combKeyList.size() >= i);

    if (combKeyList[i].size() == 0) {
        return;
    }
    
    const std::string combKeyByServer = GetDataProcess().MixedKeyServer(); // 组合键值
    const std::string callbackByClient = GetDataProcess().MixedKeyClient(); // 回调函数名称
    
    if (combKeyList[i].size() == 1) {
        if (combKeyList[i][0][0] == "") {
            EXPECT_EQ(combKeyByServer , "");
            EXPECT_EQ(callbackByClient , "");
            return;
        }
        
        EXPECT_EQ(combKeyByServer , combKeyList[i][0][0]);
        EXPECT_EQ(callbackByClient , combKeyList[i][0][1]);
        return;
    }    
    
    assert(combKeyList[i].size() > 1);
    
    if (combKeyByServer == "") {
        EXPECT_EQ(combKeyByServer , combKeyList[i][1][0]);
    }
    if (callbackByClient == "") {
        EXPECT_EQ(callbackByClient , combKeyList[i][1][1]);
        return;
    }
    
    assert(callbackByClient != "" && combKeyByServer != "");
    
    bool expectCombKeyByServer = true;
    bool expectCallbackByClient = true;
    
    for(size_t j = 1; j < combKeyList[i].size(); j++) {
        if (combKeyList[i][0][0] == "||") {
            expectCombKeyByServer = expectCombKeyByServer || combKeyByServer.find(combKeyList[i][j][0]) != combKeyByServer.npos;
            expectCallbackByClient = expectCallbackByClient || callbackByClient.find(combKeyList[i][j][1]) != callbackByClient.npos;
            if (expectCombKeyByServer) {
                break;
            }
            if (expectCallbackByClient) {
                break;
            }
        } else if (combKeyList[i][0][0] == "&&") {
            expectCombKeyByServer = expectCombKeyByServer && combKeyByServer.find(combKeyList[i][j][0]) != combKeyByServer.npos;
            expectCallbackByClient = expectCallbackByClient && callbackByClient.find(combKeyList[i][j][1]) != callbackByClient.npos;
            if (!expectCombKeyByServer) {
                break;
            }
            if (!expectCallbackByClient) {
                break;
            }
        }
    }
    EXPECT_EQ(expectCombKeyByServer , true);
    EXPECT_EQ(expectCallbackByClient , true);
}

void SingleWindowRegisteredTest::DoCompareAndExpect(const struct CaseInfo &ci, const std::string &caseId)
{
    for (unsigned int i = 0; i < ci.eventList.size(); i++) {
        GetSTHelper().InJectionEvent(ci.eventList[i], ci.deviceMsg[i]);

        sleep(3);

        if (caseId.find("_Voice_") == caseId.npos && caseId.find("_Phalangeal_") == caseId.npos) {
            
            std::string ExpectServerResult = "NULL|NULL|NULL |";
            std::string ExpectClientResult = "NULL|NULL|NULL |";
            //EXPECT_EQ(GetDataProcess().GetLibinputValue(), ci.libinputExpectList[i]);
            EXPECT_EQ(GetDataProcess().GetStandardResult(), ci.standardExpectList[i]);
            
            if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.dispatcherList[i] != "|0|0|1" &&
                ci.dispatcherList[i] != "|1|0|0") {
                ExpectServerResult = ci.expectL3Event[i] + ci.deviceMsg[i] +
                    GetSTHelper().valueServer;
                ExpectClientResult = ci.expectL3Event[i] + ci.deviceMsg[i] +
                    GetSTHelper().valueClient;                         
            } else if ((ci.dispatcherList[i] == "|0|0|1" || ci.dispatcherList[i] == "|1|0|0") &&
                ci.combKeyList[i][0][0] != "") {
                ExpectServerResult += GetSTHelper().valueServer;
                ExpectClientResult += GetSTHelper().valueClient;
            }
            EXPECT_EQ(GetDataProcess().GetActualServerResult(), ExpectServerResult);
            EXPECT_EQ(GetDataProcess().GetActualClientResult(), ExpectClientResult);
            EXPECT_EQ((ci.dispatcherList[i] == GetDataProcess().GetDispatcherStr())
                     || (ci.dispatcherList[i].find(GetDataProcess().GetDispatcherStr())!=
                     ci.dispatcherList[i].npos), true);
        }
        
        ExpectCombKey(ci.combKeyList, i);
    }
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_003_C
 * Function: Multi_HandOut_Keyboard_Reg_App_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_003_C, TestSize.Level0)
{
    std::vector<ClientList> clientList = GetDataProcess().GetClientList();
    EXPECT_NE(clientList.size(), size_t(0));
    if (clientList.size() == 0) {
        return;
    }

    GetSTHelper().ReplaceServerValue(std::regex("fd1"), std::to_string(clientList[0].fd));
    GetSTHelper().ReplaceServerValue(std::regex("surfaceId1"), std::to_string(clientList[0].surfaceId));
    GetSTHelper().ReplaceServerValue(std::regex("abilityId1"), std::to_string(clientList[0].abilityId));

    GetSTHelper().ReplaceClientValue(std::regex("fd1"), std::to_string(clientList[0].fd));
    GetSTHelper().ReplaceClientValue(std::regex("surfaceId1"), std::to_string(clientList[0].surfaceId));
    GetSTHelper().ReplaceClientValue(std::regex("abilityId1"), std::to_string(clientList[0].abilityId));

    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "03010203109000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|109|1", "eventKeyboard|109|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|1|", "eventKeyboard|2069|0|"};
    ci.combKeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_003_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_008_C
 * Function: Multi_HandOut_Keyboard_Reg_App_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203103001", "03010203103000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|103|1", "eventKeyboard|103|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2012|1|", "eventKeyboard|2012|0|"};
    ci.combKeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_008_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_013_C
 * Function: Multi_HandOut_Keyboard_Reg_App_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203105001", "03010203105000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|105|1", "eventKeyboard|105|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2014|1|", "eventKeyboard|2014|0|"};
    ci.combKeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_013_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_018_C
 * Function: Multi_HandOut_Keyboard_Reg_App_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203104001", "03010203104000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|104|1", "eventKeyboard|104|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2068|1|", "eventKeyboard|2068|0|"};
    ci.combKeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_018_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_023_C
 * Function: Multi_HandOut_Keyboard_Reg_App_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203108001", "03010203108000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|108|1", "eventKeyboard|108|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2013|1|", "eventKeyboard|2013|0|"};
    ci.combKeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_023_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_028_C
 * Function: Multi_HandOut_Keyboard_Reg_App_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203106001", "03010203106000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|106|1", "eventKeyboard|106|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2015|1|", "eventKeyboard|2015|0|"};
    ci.combKeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_028_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_033_C
 * Function: Multi_HandOut_Keyboard_Reg_App_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203063001", "03010203063000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|63|1", "eventKeyboard|63|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2094|1|", "eventKeyboard|2094|0|"};
    ci.combKeyList = {{{"1107","OnRefresh"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_033_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_038_C
 * Function: Multi_HandOut_Keyboard_Reg_App_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203019001", "03010203019000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|19|1", "eventKeyboard|19|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2034|1|", "eventKeyboard|2034|0|",
                        "eventKeyboard|2072|0|"};
    ci.combKeyList = {{{""}}, {{"1107","OnRefresh"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_038_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_043_C
 * Function: Multi_HandOut_Keyboard_Reg_App_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203127001", "03010203127000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|127|1", "eventKeyboard|127|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2067|1|", "eventKeyboard|2067|0|"};
    ci.combKeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_043_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_048_C
 * Function: Multi_HandOut_Keyboard_Reg_App_048_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_048_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203042001", "03010203068001", "03010203068000", "03010203042000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|42|1", "eventKeyboard|68|1", "eventKeyboard|68|0",
                             "eventKeyboard|42|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2047|1|", "eventKeyboard|2099|1|", "eventKeyboard|2099|0|",
                        "eventKeyboard|2047|0|"};
    ci.combKeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_048_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_053_C
 * Function: Multi_HandOut_Keyboard_Reg_App_053_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_053_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203042001", "03010203068001", "03010203068000",
                    "03010203042000", "03010203125000"};
    ci.deviceMsg = {"", "", "", "",
                             "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|42|1", "eventKeyboard|68|1",
                             "eventKeyboard|68|0", "eventKeyboard|42|0", "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2076|1|", "eventKeyboard|2047|1|", "eventKeyboard|2099|1|",
                        "eventKeyboard|2099|0|", "eventKeyboard|2047|0|", "eventKeyboard|2076|0|"};
    ci.combKeyList = {{{""}}, {{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_053_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_058_C
 * Function: Multi_HandOut_Keyboard_Reg_App_058_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_058_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203046001", "03010203046000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|46|1", "eventKeyboard|46|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2019|1|", "eventKeyboard|2019|0|",
                        "eventKeyboard|2072|0|"};
    ci.combKeyList = {{{""}}, {{"1103","OnCopy"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_058_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_063_C
 * Function: Multi_HandOut_Keyboard_Reg_App_063_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_063_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203097001", "03010203047001", "03010203047000", "03010203097000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|97|1", "eventKeyboard|47|1", "eventKeyboard|47|0",
                             "eventKeyboard|97|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2073|1|", "eventKeyboard|2038|1|", "eventKeyboard|2038|0|",
                        "eventKeyboard|2073|0|"};
    ci.combKeyList = {{{""}}, {{"1104","OnPaste"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_063_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_068_C
 * Function: Multi_HandOut_Keyboard_Reg_App_068_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_068_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203045001", "03010203045000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|45|1", "eventKeyboard|45|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2040|1|", "eventKeyboard|2040|0|",
                        "eventKeyboard|2072|0|"};
    ci.combKeyList = {{{""}}, {{"1105","OnCut"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_068_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_073_C
 * Function: Multi_HandOut_Keyboard_Reg_App_073_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_073_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203044001", "03010203044000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|44|1", "eventKeyboard|44|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2042|1|", "eventKeyboard|2042|0|",
                        "eventKeyboard|2072|0|"};
    ci.combKeyList = {{{""}}, {{"1106","OnUndo"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_073_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_078_C
 * Function: Multi_HandOut_Keyboard_Reg_App_078_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_078_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2119|1|", "eventKeyboard|2119|0|"};
    ci.combKeyList = {{{"&&"},{"1110","OnEnter"},{"1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_078_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_083_C
 * Function: Multi_HandOut_Keyboard_Reg_App_083_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_083_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2070|1|", "eventKeyboard|2070|0|"};
    ci.combKeyList = {{{"&&"},{"1109","OnCancel"},{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_083_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_088_C
 * Function: Multi_HandOut_Keyboard_Reg_App_088_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_088_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203025001", "03010203025000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|25|1", "eventKeyboard|25|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2032|1|", "eventKeyboard|2032|0|",
                        "eventKeyboard|2072|0|"};
    ci.combKeyList = {{{""}}, {{"1114","OnPrint"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_088_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_093_C
 * Function: Multi_HandOut_Keyboard_Reg_App_093_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_093_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2070|1|", "eventKeyboard|2070|0|"};
    ci.combKeyList = {{{"&&"},{"1109","OnCancel"},{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_093_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_098_C
 * Function: Multi_HandOut_Keyboard_Reg_App_098_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_098_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2119|1|", "eventKeyboard|2119|0|"};
    ci.combKeyList = {{{"&&"},{"1110","OnEnter"},{"1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_App_098_C");
}
}
