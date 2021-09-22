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
class windowlessRegisteredTest_Test : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void windowlessRegisteredTest_Test::SetUpTestCase()
{}

void windowlessRegisteredTest_Test::TearDownTestCase()
{}

void windowlessRegisteredTest_Test::SetUp()
{}

void windowlessRegisteredTest_Test::TearDown()
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
 * Feature: Multi_HandOut_Mouse_Reg_App_001_B
 * Function: Multi_HandOut_Mouse_Reg_App_001_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */

AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Mouse_Reg_App_001_B, TestSize.Level0)
{
    AUTOTEST_MULTIINPUTCOMMON->InitClient("Scene_B");
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
    ci.eventList = {"01010203274001", "01010203274000"};
    ci.flagList = {"", "1"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_001_B");
}
/*
 * Feature: Multi_HandOut_Mouse_Reg_App_007_B
 * Function: Multi_HandOut_Mouse_Reg_App_007_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Mouse_Reg_App_007_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "01010203273000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_007_B");
}
/*
 * Feature: Multi_HandOut_Mouse_Reg_App_013_B
 * Function: Multi_HandOut_Mouse_Reg_App_013_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Mouse_Reg_App_013_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_013_B");
}
/*
 * Feature: Multi_HandOut_Mouse_Reg_App_019_B
 * Function: Multi_HandOut_Mouse_Reg_App_019_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Mouse_Reg_App_019_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_019_B");
}
/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_021_B
 * Function: Multi_HandOut_TrackPad_Reg_App_021_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_TrackPad_Reg_App_021_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_021_B");
}
/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_026_B
 * Function: Multi_HandOut_TrackPad_Reg_App_026_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_TrackPad_Reg_App_026_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_026_B");
}
/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_031_B
 * Function: Multi_HandOut_TrackPad_Reg_App_031_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_TrackPad_Reg_App_031_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "19010203273000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_031_B");
}
/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_036_B
 * Function: Multi_HandOut_TrackPad_Reg_App_036_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_TrackPad_Reg_App_036_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "192102020102", "192102020102", "192102020102",
                    "192102020102", "192102020102", "192102020102", "192102020102",
                    "192102020102", "192102020102"};
    ci.flagList = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", ""};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0", "eventPointer|30|0",
                             "eventPointer|30|0", "eventPointer|30|0", "eventPointer|30|0",
                             "eventPointer|30|0", "eventPointer|30|0", "eventPointer|30|0",
                             "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_036_B");
}
/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_041_B
 * Function: Multi_HandOut_TrackPad_Reg_App_041_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_TrackPad_Reg_App_041_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2", "1921020201-2", "1921020201-2", "1921020201-2",
                    "1921020201-2", "1921020201-2", "1921020201-2", "1921020201-2",
                    "1921020201-2", "1921020201-2"};
    ci.flagList = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", ""};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-30|0", "eventPointer|-30|0",
                             "eventPointer|-30|0", "eventPointer|-30|0", "eventPointer|-30|0",
                             "eventPointer|-30|0", "eventPointer|-30|0", "eventPointer|-30|0",
                             "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_041_B");
}
/*
 * Feature: Multi_HandOut_Trackball_Reg_001_B
 * Function: Multi_HandOut_Trackball_Reg_001_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Trackball_Reg_001_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "14010203273000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_001_B");
}
/*
 * Feature: Multi_HandOut_Trackball_Reg_007_B
 * Function: Multi_HandOut_Trackball_Reg_007_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Trackball_Reg_007_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_007_B");
}
/*
 * Feature: Multi_HandOut_Trackball_Reg_013_B
 * Function: Multi_HandOut_Trackball_Reg_013_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Trackball_Reg_013_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002"};
    ci.flagList = {"1"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_013_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_001_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_001_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_001_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203164001", "09010203164000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|164|1", "eventKeyboard|164|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"||"},{"3002","OnPauseor3001","OnPlay"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_001_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_006_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_006_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_006_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203164001", "09010203164000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|164|1", "eventKeyboard|164|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"||"},{"3002","OnPauseor3001","OnPlay"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_006_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_011_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_011_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_011_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203103001", "09010203103000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|103|1", "eventKeyboard|103|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_011_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_016_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_016_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_016_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203108001", "09010203108000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|108|1", "eventKeyboard|108|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_016_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_021_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_021_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_021_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203105001", "09010203105000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|105|1", "eventKeyboard|105|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_021_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_026_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_026_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_026_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203106001", "09010203106000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|106|1", "eventKeyboard|106|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_026_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_031_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_031_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_031_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203139001", "09010203139000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|139|1", "eventKeyboard|139|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_031_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_036_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_036_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_036_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203028001", "09010203028000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|28|1", "eventKeyboard|28|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnterand1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_036_B");
}
/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_046_B
 * Function: Multi_HandOut_RemoteControl_Reg_App_046_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_RemoteControl_Reg_App_046_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203158001", "09010203158000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|158|1", "eventKeyboard|158|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1113","OnBackand4010","OnClosePage"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_046_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_001_B
 * Function: Multi_HandOut_Keyboard_Reg_App_001_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_001_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "03010203109000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|109|1", "eventKeyboard|109|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_001_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_006_B
 * Function: Multi_HandOut_Keyboard_Reg_App_006_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_006_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203103001", "03010203103000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|103|1", "eventKeyboard|103|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_006_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_011_B
 * Function: Multi_HandOut_Keyboard_Reg_App_011_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_011_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203105001", "03010203105000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|105|1", "eventKeyboard|105|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_011_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_016_B
 * Function: Multi_HandOut_Keyboard_Reg_App_016_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_016_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203104001", "03010203104000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|104|1", "eventKeyboard|104|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_016_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_021_B
 * Function: Multi_HandOut_Keyboard_Reg_App_021_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_021_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203108001", "03010203108000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|108|1", "eventKeyboard|108|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_021_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_026_B
 * Function: Multi_HandOut_Keyboard_Reg_App_026_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_026_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203106001", "03010203106000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|106|1", "eventKeyboard|106|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_026_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_031_B
 * Function: Multi_HandOut_Keyboard_Reg_App_031_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_031_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203063001", "03010203063000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|63|1", "eventKeyboard|63|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1107","OnRefresh"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_031_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_036_B
 * Function: Multi_HandOut_Keyboard_Reg_App_036_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_036_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203019001", "03010203019000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|19|1", "eventKeyboard|19|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1107","OnRefresh"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_036_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_041_B
 * Function: Multi_HandOut_Keyboard_Reg_App_041_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_041_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203127001", "03010203127000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|127|1", "eventKeyboard|127|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_041_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_046_B
 * Function: Multi_HandOut_Keyboard_Reg_App_046_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_046_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203042001", "03010203068001", "03010203068000", "03010203042000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|42|1", "eventKeyboard|68|1", "eventKeyboard|68|0",
                             "eventKeyboard|42|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_046_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_051_B
 * Function: Multi_HandOut_Keyboard_Reg_App_051_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_051_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203125001", "03010203042001", "03010203068001", "03010203068000",
                    "03010203042000", "03010203125000"};
    ci.flagList = {"", "", "1", "", "", ""};
    ci.deviceMsg = {"", "", "", "",
                             "", ""};
    ci.libinputExpectList = {"eventKeyboard|125|1", "eventKeyboard|42|1", "eventKeyboard|68|1",
                             "eventKeyboard|68|0", "eventKeyboard|42|0", "eventKeyboard|125|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_051_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_056_B
 * Function: Multi_HandOut_Keyboard_Reg_App_056_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_056_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203046001", "03010203046000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|46|1", "eventKeyboard|46|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1103","OnCopy"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_056_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_061_B
 * Function: Multi_HandOut_Keyboard_Reg_App_061_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_061_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203097001", "03010203047001", "03010203047000", "03010203097000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|97|1", "eventKeyboard|47|1", "eventKeyboard|47|0",
                             "eventKeyboard|97|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1104","OnPaste"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_061_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_066_B
 * Function: Multi_HandOut_Keyboard_Reg_App_066_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_066_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203045001", "03010203045000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|45|1", "eventKeyboard|45|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1105","OnCut"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_066_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_071_B
 * Function: Multi_HandOut_Keyboard_Reg_App_071_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_071_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203044001", "03010203044000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|44|1", "eventKeyboard|44|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1106","OnUndo"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_071_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_076_B
 * Function: Multi_HandOut_Keyboard_Reg_App_076_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_076_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnterand1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_076_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_081_B
 * Function: Multi_HandOut_Keyboard_Reg_App_081_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_081_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1109","OnCanceland1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_081_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_086_B
 * Function: Multi_HandOut_Keyboard_Reg_App_086_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_086_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203025001", "03010203025000", "03010203029000"};
    ci.flagList = {"", "1", "", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|25|1", "eventKeyboard|25|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1114","OnPrint"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_086_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_091_B
 * Function: Multi_HandOut_Keyboard_Reg_App_091_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_091_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1109","OnCanceland1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_091_B");
}
/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_096_B
 * Function: Multi_HandOut_Keyboard_Reg_App_096_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Keyboard_Reg_App_096_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.flagList = {"1", ""};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnterand1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_096_B");
}
/*
 * Feature: Multi_HandOut_touch_020_B
 * Function: Multi_HandOut_touch_020_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_touch_020_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"41000000010000000", "43000100010000000", "43000200010000000", "42000000000000000"};
    ci.flagList = {"", "1", "1", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"500|0|0|100", "502|0|100|100", "502|0|200|100",
                             "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1113","onBack"}}, {{"1113","onBack"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_touch_020_B");
}
/*
 * Feature: Multi_HandOut_touch_023_B
 * Function: Multi_HandOut_touch_023_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_touch_023_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"41000480010000000", "43000380010000000", "43000200010000000", "42000000000000000"};
    ci.flagList = {"", "1", "1", ""};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"500|0|480|100", "502|0|380|100", "502|0|200|100",
                             "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.mixedkeyList = {{{""}}, {{"1113","onBack"}}, {{"1113","onBack"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_touch_023_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_001_B
 * Function: Multi_HandOut_Voice_Reg_APP_001_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_001_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"3002 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"3002","onPause"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_001_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_006_B
 * Function: Multi_HandOut_Voice_Reg_APP_006_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_006_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"3001 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"3001","onPlay"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_006_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_011_B
 * Function: Multi_HandOut_Voice_Reg_APP_011_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_011_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5001 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"5001","onAnswer"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_011_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_016_B
 * Function: Multi_HandOut_Voice_Reg_APP_016_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_016_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5002 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"5002","onRefuse"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_016_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_021_B
 * Function: Multi_HandOut_Voice_Reg_APP_021_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_021_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5003 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"5003","onHangup"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_021_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_026_B
 * Function: Multi_HandOut_Voice_Reg_APP_026_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_026_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1111 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1111","onPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_026_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_031_B
 * Function: Multi_HandOut_Voice_Reg_APP_031_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_031_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1112 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1112","onNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_031_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_036_B
 * Function: Multi_HandOut_Voice_Reg_APP_036_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_036_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1107 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1107","onRefresh"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_036_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_041_B
 * Function: Multi_HandOut_Voice_Reg_APP_041_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_041_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1103 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1103","onCopy"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_041_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_046_B
 * Function: Multi_HandOut_Voice_Reg_APP_046_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_046_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1104 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1104","onPaste"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_046_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_051_B
 * Function: Multi_HandOut_Voice_Reg_APP_051_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_051_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1105 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1105","onCut"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_051_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_056_B
 * Function: Multi_HandOut_Voice_Reg_APP_056_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_056_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1106 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1106","onUndo"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_056_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_061_B
 * Function: Multi_HandOut_Voice_Reg_APP_061_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_061_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1101 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1101","onShowMenu"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_061_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_066_B
 * Function: Multi_HandOut_Voice_Reg_APP_066_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_066_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1110 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1110","onEnter"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_066_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_071_B
 * Function: Multi_HandOut_Voice_Reg_APP_071_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_071_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1109 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1109","onCancel"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_071_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_076_B
 * Function: Multi_HandOut_Voice_Reg_APP_076_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_076_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1102 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1102","onSend"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_076_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_081_B
 * Function: Multi_HandOut_Voice_Reg_APP_081_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_081_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1114 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1114","onPrint"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_081_B");
}
/*
 * Feature: Multi_HandOut_Voice_Reg_APP_086_B
 * Function: Multi_HandOut_Voice_Reg_APP_086_B
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(windowlessRegisteredTest_Test, Multi_HandOut_Voice_Reg_APP_086_B, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1113 1"};
    ci.flagList = {"1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.mixedkeyList = {{{"1113","onBack"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_086_B");
}
}