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
#include "libmmi_util.h"
#include "auto_test_data_process.h"
#include "MultiInputCommon.h"
#include "auto_test_main.h"
#ifdef  AUTO_TEST_FUNC_BUILD
using namespace testing::ext;
#endif
namespace {
class systemEventWindowlessTest_Test : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void systemEventWindowlessTest_Test::SetUpTestCase()
{}

void systemEventWindowlessTest_Test::TearDownTestCase()
{}

void systemEventWindowlessTest_Test::SetUp()
{}

void systemEventWindowlessTest_Test::TearDown()
{}

struct CaseInfo {
    std::vector<std::string> eventList = {""};
    std::vector<std::string> flagList = {""};
    std::vector<std::string> deviceMsg = {""};
    std::vector<std::string> libinputExpectList = {""};
    std::vector<std::string> standardExpectList = {""};
    std::vector<std::vector<std::vector<std::string>>> mixedkeyList = {{{""}}};
    std::vector<std::string> dispatcherList = {""};
};

/*
 * Feature: AutoExpectMixKey
 * Function: AutoExpectMixKey
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
void AutoExpectMixKey(std::vector<std::vector<std::vector<std::string>>> mixedkeyList, int i)
{
    std::string mix_server = AUTOTEST_DATAPROCESS->MixedKeyServer();
    std::string mix_client = AUTOTEST_DATAPROCESS->MixedKeyClient();
    if (mixedkeyList[i][0][0] != "") {
        if (mixedkeyList[i].size() == 1) {
            EXPECT_EQ(mix_server , mixedkeyList[i][0][0]);
            EXPECT_EQ(mix_client , mixedkeyList[i][0][1]);
        } else if (mixedkeyList[i].size() > 1) {
            if (mix_server == "") EXPECT_EQ(mix_server , mixedkeyList[i][1][0]);
            if (mix_client == "") EXPECT_EQ(mix_client , mixedkeyList[i][1][1]);
            else {
                bool expectMixServerResult = true;
                bool expectMixClientResult = true;
                for(unsigned int j=1; j<mixedkeyList[i].size(); j++) {
                    if (mixedkeyList[i][0][0] == "||") {
                        expectMixServerResult = expectMixServerResult ||
                                                mix_server.find(mixedkeyList[i][j][0]) != mix_server.npos;
                        expectMixClientResult = expectMixServerResult ||
                                                mix_client.find(mixedkeyList[i][j][1]) != mix_client.npos;
                        if (expectMixServerResult) break;
                        if (expectMixClientResult) break;
                    } else if (mixedkeyList[i][0][0] == "&&") {
                        expectMixServerResult = expectMixServerResult &&
                                                mix_server.find(mixedkeyList[i][j][0]) != mix_server.npos;
                        expectMixClientResult = expectMixServerResult &&
                                                mix_client.find(mixedkeyList[i][j][1]) != mix_client.npos;
                        if (!expectMixServerResult) break;
                        if (!expectMixClientResult) break;
                    }
                }
                EXPECT_EQ(expectMixServerResult , true);
                EXPECT_EQ(expectMixClientResult , true);
            }
        }
    } else {
        EXPECT_EQ(mix_server , "");
        EXPECT_EQ(mix_client , "");
    }
}

/*
 * Feature: AutoTestCommon
 * Function: AutoTestCommon
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
void AutoTestCommon(struct CaseInfo ci, std::string caseNum)
{
    for (unsigned int i = 0; i < ci.eventList.size(); i++) {
        AUTOTEST_MULTIINPUTCOMMON->InJectionEvent(ci.eventList[i], ci.deviceMsg[i]);
        if (caseNum.find("_Voice_") == caseNum.npos && caseNum.find("_Phalangeal_") == caseNum.npos) {
            std::string ExpectServerResult = "NULL|NULL|NULL |";
            std::string ExpectClientResult = "NULL|NULL|NULL |";
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetLibinputValue(), ci.libinputExpectList[i]);
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetStandardResult(), ci.standardExpectList[i]);
            if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.flagList[i] == "1") {
                ExpectServerResult += AUTOTEST_MULTIINPUTCOMMON->valueServer;
                ExpectClientResult += AUTOTEST_MULTIINPUTCOMMON->valueClient;
            }
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualServerResult(), ExpectServerResult);
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualClientResult(), ExpectClientResult);
            EXPECT_EQ((ci.dispatcherList[i] == AUTOTEST_DATAPROCESS->GetDispatcherStr())
                     || (ci.dispatcherList[i].find(AUTOTEST_DATAPROCESS->GetDispatcherStr())!= ci.dispatcherList[i].npos),
                    true);
        }
        AutoExpectMixKey(ci.mixedkeyList, i);
        AUTOTEST_DATAPROCESS->ClearAll();
    }
}

/*
 * Feature: Multi_HandOut_Mouse_Reg_Sys_003_A
 * Function: Multi_HandOut_Mouse_Reg_Sys_003_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */

AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Mouse_Reg_Sys_003_A, TestSize.Level0)
{
    AUTOTEST_MULTIINPUTCOMMON->InitClient("Scene_A");
    sleep(1);
    std::vector<ClientList> clientList = AUTOTEST_DATAPROCESS->GetClientList();
    AUTOTEST_MULTIINPUTCOMMON->valueServer = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueServer,
                                                                std::regex("fd1"),
                                                                std::to_string(clientList[0].fd));
    AUTOTEST_MULTIINPUTCOMMON->valueServer = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueServer,
                                                                std::regex("surfaceId1"),
                                                                std::to_string(clientList[0].surfaceId));
    AUTOTEST_MULTIINPUTCOMMON->valueServer = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueServer,
                                                                std::regex("abilityId1"),
                                                                std::to_string(clientList[0].abilityId));
    AUTOTEST_MULTIINPUTCOMMON->valueClient = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueClient,
                                                                std::regex("fd1"),
                                                                std::to_string(clientList[0].fd));
    AUTOTEST_MULTIINPUTCOMMON->valueClient = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueClient,
                                                                std::regex("surfaceId1"),
                                                                std::to_string(clientList[0].surfaceId));
    AUTOTEST_MULTIINPUTCOMMON->valueClient = std::regex_replace(AUTOTEST_MULTIINPUTCOMMON->valueClient,
                                                                std::regex("abilityId1"),
                                                                std::to_string(clientList[0].abilityId));
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "01010203274000", "01010203274001", "01010203274000"};
    ci.flagList = {"", "1", "", "1"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|274|0", "eventPointer|274|1",
                             "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1113","OnBack"}}, {{""}}, {{"4006","OnRecent"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_Sys_003_A");
}
/*
 * Feature: Multi_HandOut_Mouse_Reg_Sys_004_A
 * Function: Multi_HandOut_Mouse_Reg_Sys_004_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Mouse_Reg_Sys_004_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010304027400012000", "01010304027400002000"};
    ci.flagList = {"", "1"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4005","OnGotoDesktop"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_Sys_004_A");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_Sys_004_A
 * Function: Multi_HandOut_RemoteControl_Reg_Sys_004_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_RemoteControl_Reg_Sys_004_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203642001", "09010203642000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|642|1", "eventKeyboard|642|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"||"},{"4003","OnStartScreenRecordor4004","OnStopScreenRecord"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_Sys_004_A");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_Sys_006_A
 * Function: Multi_HandOut_RemoteControl_Reg_Sys_006_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_RemoteControl_Reg_Sys_006_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203642001", "09010203642000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|642|1", "eventKeyboard|642|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"||"},{"4003","OnStartScreenRecordor4004","OnStopScreenRecord"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_Sys_006_A");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_Sys_020_A
 * Function: Multi_HandOut_RemoteControl_Reg_Sys_020_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_RemoteControl_Reg_Sys_020_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203583001", "09010203583000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|583|1", "eventKeyboard|583|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"4011","OnLaunchVoiceAssistant"}}, {{""}}};
    ci.dispatcherList = {"|1|0|0", "|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_Sys_020_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_014_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_014_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_014_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203087001", "03010203087000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|87|1", "eventKeyboard|87|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_014_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_015_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_015_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_015_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203042001", "03010203031001", "03010203031000",
                    "03010203042000", "03010203125000"};
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
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_015_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_016_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_016_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_016_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203032001", "03010203032000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|32|1", "eventKeyboard|32|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4005","OnGotoDesktop"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_016_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_017_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_017_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_017_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203035001", "03010203035000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|35|1", "eventKeyboard|35|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4005","OnGotoDesktop"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_017_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_018_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_018_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_018_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203015001", "03010203015000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|15|1", "eventKeyboard|15|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4006","OnRecent"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_018_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_019_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_019_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_019_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203056001", "03010203015001", "03010203015000", "03010203056000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|56|1", "eventKeyboard|15|1", "eventKeyboard|15|0",
                             "eventKeyboard|56|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4006","OnRecent"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_019_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_020_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_020_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_020_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203049001", "03010203049000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|49|1", "eventKeyboard|49|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4007","OnShowNotifiCation"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_020_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_021_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_021_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_021_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203038001", "03010203038000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|38|1", "eventKeyboard|38|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4008","OnLockScreen"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_021_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_022_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_022_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_022_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203031001", "03010203031000", "03010203125000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|31|1", "eventKeyboard|31|0",
                             "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4009","OnSearch"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_022_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_023_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_023_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_023_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203033001", "03010203033000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|33|1", "eventKeyboard|33|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4009","OnSearch"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_023_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_024_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_024_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_024_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203056001", "03010203062001", "03010203062000", "03010203056000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|56|1", "eventKeyboard|62|1", "eventKeyboard|62|0",
                             "eventKeyboard|56|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4010","OnClosePage"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_024_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_025_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_025_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_025_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203097001", "03010203017001", "03010203017000", "03010203097000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|97|1", "eventKeyboard|17|1", "eventKeyboard|17|0",
                             "eventKeyboard|97|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"4010","OnClosePage"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_025_A");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_Sys_026_A
 * Function: Multi_HandOut_Keyboard_Reg_Sys_026_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Keyboard_Reg_Sys_026_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203062001", "03010203062000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|62|1", "eventKeyboard|62|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"4012","OnMute"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_Sys_026_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_002_A
 * Function: Multi_HandOut_Voice_Reg_Sys_002_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_002_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4001 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_002_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_004_A
 * Function: Multi_HandOut_Voice_Reg_Sys_004_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_004_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4002 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4002","OnScreenSplit"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_004_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_006_A
 * Function: Multi_HandOut_Voice_Reg_Sys_006_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_006_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4003 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"||"},{"4003","OnStartScreenRecord"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_006_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_008_A
 * Function: Multi_HandOut_Voice_Reg_Sys_008_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_008_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4004 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"||"},{"4004","OnStopScreenRecord"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_008_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_010_A
 * Function: Multi_HandOut_Voice_Reg_Sys_010_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_010_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4005 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4005","OnGotoDesktop"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_010_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_012_A
 * Function: Multi_HandOut_Voice_Reg_Sys_012_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_012_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4006 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4006","OnRecent"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_012_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_014_A
 * Function: Multi_HandOut_Voice_Reg_Sys_014_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_014_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4007 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4007","OnShowNotification"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_014_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_016_A
 * Function: Multi_HandOut_Voice_Reg_Sys_016_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_016_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4008 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4008","OnLockScreen"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_016_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_018_A
 * Function: Multi_HandOut_Voice_Reg_Sys_018_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_018_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4009 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4009","OnSearch"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_018_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_020_A
 * Function: Multi_HandOut_Voice_Reg_Sys_020_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_020_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4010 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4010","OnClosePage"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_020_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_022_A
 * Function: Multi_HandOut_Voice_Reg_Sys_022_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_022_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4011 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4011","OnLaunchVoiceAssistant"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_022_A");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_Sys_024_A
 * Function: Multi_HandOut_Voice_Reg_Sys_024_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Voice_Reg_Sys_024_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4012 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4012","OnMute"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Sys_024_A");
}
/*
 * Feature: Multi_HandOut_Phalangeal_002_A
 * Function: Multi_HandOut_Phalangeal_002_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Phalangeal_002_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4001 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Phalangeal"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_002_A");
}
/*
 * Feature: Multi_HandOut_Phalangeal_004_A
 * Function: Multi_HandOut_Phalangeal_004_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Phalangeal_004_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4002 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Phalangeal"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"4002","OnScreenSplit"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_004_A");
}
/*
 * Feature: Multi_HandOut_Phalangeal_006_A
 * Function: Multi_HandOut_Phalangeal_006_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Phalangeal_006_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4003 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Phalangeal"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"||"},{"4003","OnStartScreenRecord"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_006_A");
}
/*
 * Feature: Multi_HandOut_Phalangeal_008_A
 * Function: Multi_HandOut_Phalangeal_008_A
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(systemEventWindowlessTest_Test, Multi_HandOut_Phalangeal_008_A, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4004 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Phalangeal"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"||"},{"4004","OnStopScreenRecord"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_008_A");
}
}