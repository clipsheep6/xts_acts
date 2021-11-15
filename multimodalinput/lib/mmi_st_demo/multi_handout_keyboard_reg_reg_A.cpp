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

namespace {
using namespace testing::ext;
using namespace OHOS::MMI;
using namespace OHOS;

struct CaseInfo {
    std::vector<std::string> eventList = { "" };
    std::vector<std::string> flagList = { "" };
    std::vector<std::string> deviceMsg = { "" };
    std::vector<std::string> libinputExpectList = { "" };
    std::vector<std::string> standardExpectList = { "" };
    std::vector<std::vector<std::vector<std::string>>> mixedkeyList = { {{""}} };
    std::vector<std::string> dispatcherList = { "" };
};

class multiHandoutkeyboardregRegATest_Test : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void) {}

    void SetUp() override {}
    void TearDown() override;

    void DoCompareAndExpect(const struct CaseInfo& ci, const std::string& caseId);
private:
    void ExpectCombKey(const std::vector<std::vector<std::vector<std::string>>>& combKeyList, const size_t i);
};

void multiHandoutkeyboardregRegATest_Test::SetUpTestCase()
{
    GetSTHelper().InitClient("Scene_C");
    sleep(1);
}

void multiHandoutkeyboardregRegATest_Test::TearDown()
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
void multiHandoutkeyboardregRegATest_Test::ExpectCombKey(const std::vector<std::vector<std::vector<std::string>>>& combKeyList, const size_t i)
{
    std::string combKeyByServer = GetDataProcess().MixedKeyServer();
    std::string callbackByClient = GetDataProcess().MixedKeyClient();
    if (combKeyList[i][0][0] != "") {
        if (combKeyList[i].size() == 1) {
            EXPECT_EQ(combKeyByServer , combKeyList[i][0][0]);
            EXPECT_EQ(callbackByClient , combKeyList[i][0][1]);
        } else if (combKeyList[i].size() > 1) {
            if (combKeyByServer == "") {
                EXPECT_EQ(combKeyByServer, combKeyList[i][1][0]);
            }
            if (callbackByClient == "") {
                EXPECT_EQ(callbackByClient, combKeyList[i][1][1]);
            } else {
                bool expectMixServerResult = true;
                bool expectMixClientResult = true;
                for(unsigned int j=1; j<combKeyList[i].size(); j++) {
                    if (combKeyList[i][0][0] == "||") {
                        expectMixServerResult = expectMixServerResult ||
                                                combKeyByServer.find(combKeyList[i][j][0]) != combKeyByServer.npos;
                        expectMixClientResult = expectMixServerResult ||
                                                callbackByClient.find(combKeyList[i][j][1]) != callbackByClient.npos;
                        if (expectMixServerResult) break;
                        if (expectMixClientResult) break;
                    } else if (combKeyList[i][0][0] == "&&") {
                        expectMixServerResult = expectMixServerResult &&
                                                combKeyByServer.find(combKeyList[i][j][0]) != combKeyByServer.npos;
                        expectMixClientResult = expectMixServerResult &&
                                                callbackByClient.find(combKeyList[i][j][1]) != callbackByClient.npos;
                        if (!expectMixServerResult) break;
                        if (!expectMixClientResult) break;
                    }
                }
                EXPECT_EQ(expectMixServerResult , true);
                EXPECT_EQ(expectMixClientResult , true);
            }
        }
    } else {
        EXPECT_EQ(combKeyByServer , "");
        EXPECT_EQ(callbackByClient , "");
    }
}

/*
 * Feature: DoCompareAndExpect
 * Function: DoCompareAndExpect
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
void multiHandoutkeyboardregRegATest_Test::DoCompareAndExpect(const struct CaseInfo& ci, const std::string& caseId)
{
    for (unsigned int i = 0; i < ci.eventList.size(); i++) {
        GetSTHelper().InJectionEvent(ci.eventList[i], ci.deviceMsg[i]);
        if (caseId.find("_Voice_") == caseId.npos && caseId.find("_Phalangeal_") == caseId.npos) {
            std::string ExpectServerResult = "NULL|NULL|NULL |";
            std::string ExpectClientResult = "NULL|NULL|NULL |";
            EXPECT_EQ(GetDataProcess().GetLibinputValue(), ci.libinputExpectList[i]);
            EXPECT_EQ(GetDataProcess().GetStandardResult(), ci.standardExpectList[i]);
            if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.flagList[i] == "1") {
                ExpectServerResult += GetSTHelper().valueServer;
                ExpectClientResult += GetSTHelper().valueClient;
            }
            EXPECT_EQ(GetDataProcess().GetActualServerResult(), ExpectServerResult);
            EXPECT_EQ(GetDataProcess().GetActualClientResult(), ExpectClientResult);
            EXPECT_EQ((ci.dispatcherList[i] == GetDataProcess().GetDispatcherStr())
                     || (ci.dispatcherList[i].find(GetDataProcess().GetDispatcherStr())!= ci.dispatcherList[i].npos),
                    true);
        }
        ExpectCombKey(ci.mixedkeyList, i);
        GetDataProcess().ClearAll();
    }
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_014_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_014_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */

HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_014_A, TestSize.Level0)
{
    //GetSTHelper().InitClient("Scene_A");
    //sleep(1);
    std::vector<ClientList> clientList = GetDataProcess().GetClientList();
    
    GetSTHelper().ReplaceServerValue(std::regex("fd1"), std::to_string(clientList[0].fd));
    GetSTHelper().ReplaceServerValue(std::regex("surfaceId1"), std::to_string(clientList[0].surfaceId));
    GetSTHelper().ReplaceServerValue(std::regex("abilityId1"), std::to_string(clientList[0].abilityId));

    GetSTHelper().ReplaceClientValue(std::regex("fd1"), std::to_string(clientList[0].fd));
    GetSTHelper().ReplaceClientValue(std::regex("surfaceId1"), std::to_string(clientList[0].surfaceId));
    GetSTHelper().ReplaceClientValue(std::regex("abilityId1"), std::to_string(clientList[0].abilityId));

    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_F11_press.json", "keyboard_KEY_F11_release.json"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|87|1", "eventKeyboard|87|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_014_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_015_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_015_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_015_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_SHIFT_LEFT_press.json", "keyboard_KEY_S_press.json", "keyboard_KEY_S_release.json",
                    "keyboard_KEY_SHIFT_LEFT_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "", "1", "", "", ""};
    ci.deviceMsg = {"", "", "", "",
                             "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|42|1", "eventKeyboard|31|1",
                             "eventKeyboard|31|0", "eventKeyboard|42|0", "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"4001","OnScreenShot"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_015_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_016_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_016_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_016_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_D_press.json", "keyboard_KEY_D_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|32|1", "eventKeyboard|32|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4005","OnGotoDesktop"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_016_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_017_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_017_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_017_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_H_press.json", "keyboard_KEY_H_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|35|1", "eventKeyboard|35|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4005","OnGotoDesktop"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_017_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_018_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_018_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_018_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_TAB_press.json", "keyboard_KEY_TAB_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|15|1", "eventKeyboard|15|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4006","OnRecent"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_018_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_019_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_019_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_019_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_ALT_LEFT_press.json", "keyboard_KEY_TAB_press.json", "keyboard_KEY_TAB_release.json", "keyboard_KEY_ALT_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|56|1", "eventKeyboard|15|1", "eventKeyboard|15|0",
                             "eventKeyboard|56|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4006","OnRecent"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_019_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_020_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_020_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_020_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_N_press.json", "keyboard_KEY_N_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|49|1", "eventKeyboard|49|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4007","OnShowNotifiCation"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_020_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_021_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_021_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_021_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_L_press.json", "keyboard_KEY_L_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|38|1", "eventKeyboard|38|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4008","OnLockScreen"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_021_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_022_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_022_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_022_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_META_LEFT_press.json", "keyboard_KEY_S_press.json", "keyboard_KEY_S_release.json", "keyboard_KEY_META_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|31|1", "eventKeyboard|31|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4009","OnSearch"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_022_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_023_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_023_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_023_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_CTRL_LEFT_press.json", "keyboard_KEY_F_press.json", "keyboard_KEY_F_release.json", "keyboard_KEY_CTRL_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|33|1", "eventKeyboard|33|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4009","OnSearch"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_023_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_024_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_024_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_024_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_ALT_LEFT_press.json", "keyboard_KEY_F4_press.json", "keyboard_KEY_F4_release.json", "keyboard_KEY_ALT_LEFT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|56|1", "eventKeyboard|62|1", "eventKeyboard|62|0",
                             "eventKeyboard|56|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4010","OnClosePage"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_024_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_025_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_025_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_025_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_CTRL_RIGHT_press.json", "keyboard_KEY_W_press.json", "keyboard_KEY_W_release.json", "keyboard_KEY_CTRL_RIGHT_release.json"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|97|1", "eventKeyboard|17|1", "eventKeyboard|17|0",
                             "eventKeyboard|97|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4010","OnClosePage"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_025_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_026_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_026_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
HWTEST_F(multiHandoutkeyboardregRegATest_Test, Multi_HandOut_Keyboard_Reg_Sys_026_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"keyboard_KEY_F4_press.json", "keyboard_KEY_F4_release.json"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|62|1", "eventKeyboard|62|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"4012","OnMute"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    DoCompareAndExpect(ci, "Multi_HandOut_Keyboard_Reg_Sys_026_A");
}
}