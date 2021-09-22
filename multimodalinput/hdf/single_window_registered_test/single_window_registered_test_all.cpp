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
class SingleWindowRegisteredTest : public testing::Test {
public:
    void SetUpTestCase();
    void TearDownTestCase();
};

void SingleWindowRegisteredTest::SetUpTestCase()
{}

void SingleWindowRegisteredTest::TearDownTestCase()
{}

struct CaseInfo {
    std::vector<std::string> eventList = {""};
    std::vector<std::string> deviceMsg = {""};
    std::vector<std::string> libinputExpectList = {""};
    std::vector<std::string> standardExpectList = {""};
    std::vector<std::string> expectL3Event = {""};
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
            if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.dispatcherList[i] != "|0|0|1" &&
                ci.dispatcherList[i] != "|1|0|0") {
                ExpectServerResult = ci.expectL3Event[i] +
                    AUTOTEST_MULTIINPUTCOMMON->valueServer;
                ExpectClientResult = ci.expectL3Event[i] +
                    AUTOTEST_MULTIINPUTCOMMON->valueClient;                         
            }
            if ((ci.dispatcherList[i] == "|0|0|1" || ci.dispatcherList[i] == "|1|0|0") &&
                ci.mixedkeyList[i][0][0] != "") {
                ExpectServerResult += AUTOTEST_MULTIINPUTCOMMON->valueServer;
                ExpectClientResult += AUTOTEST_MULTIINPUTCOMMON->valueClient;
            }
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualServerResult(), ExpectServerResult);
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualClientResult(), ExpectClientResult);
            EXPECT_EQ((ci.dispatcherList[i] == AUTOTEST_DATAPROCESS->GetDispatcherStr())
                     || (ci.dispatcherList[i].find(AUTOTEST_DATAPROCESS->GetDispatcherStr())!=
                     ci.dispatcherList[i].npos), true);
        }
        AutoExpectMixKey(ci.mixedkeyList, i);        
        AUTOTEST_DATAPROCESS->ClearAll();
    }
}

/*
 * Feature: Multi_HandOut_Mouse_Reg_App_003_C
 * Function: Multi_HandOut_Mouse_Reg_App_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Mouse_Reg_App_003_C, TestSize.Level0)
{
    AUTOTEST_MULTIINPUTCOMMON->InitClient("Scene_C");
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
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_003_C");
}

/*
 * Feature: Multi_HandOut_Mouse_Reg_App_009_C
 * Function: Multi_HandOut_Mouse_Reg_App_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Mouse_Reg_App_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "01010203273000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_009_C");
}

/*
 * Feature: Multi_HandOut_Mouse_Reg_App_015_C
 * Function: Multi_HandOut_Mouse_Reg_App_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Mouse_Reg_App_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_015_C");
}

/*
 * Feature: Multi_HandOut_Mouse_Reg_App_021_C
 * Function: Multi_HandOut_Mouse_Reg_App_021_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Mouse_Reg_App_021_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Mouse_Reg_App_021_C");
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_023_C
 * Function: Multi_HandOut_TrackPad_Reg_App_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_TrackPad_Reg_App_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_023_C");
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_028_C
 * Function: Multi_HandOut_TrackPad_Reg_App_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_TrackPad_Reg_App_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_028_C");
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_033_C
 * Function: Multi_HandOut_TrackPad_Reg_App_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_TrackPad_Reg_App_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "19010203273000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_033_C");
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_038_C
 * Function: Multi_HandOut_TrackPad_Reg_App_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_TrackPad_Reg_App_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "192102020102", "192102020102", "192102020102",
                    "192102020102", "192102020102", "192102020102", "192102020102",
                    "192102020102", "192102020102"};
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
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|", "eventPointer|30|0|",
                        "eventPointer|30|0|", "eventPointer|30|0|", "eventPointer|30|0|",
                        "eventPointer|30|0|", "eventPointer|30|0|", "eventPointer|30|0|",
                        "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_038_C");
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_App_043_C
 * Function: Multi_HandOut_TrackPad_Reg_App_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_TrackPad_Reg_App_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2", "1921020201-2", "1921020201-2", "1921020201-2",
                    "1921020201-2", "1921020201-2", "1921020201-2", "1921020201-2",
                    "1921020201-2", "1921020201-2"};
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
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-30|0|", "eventPointer|-30|0|",
                        "eventPointer|-30|0|", "eventPointer|-30|0|", "eventPointer|-30|0|",
                        "eventPointer|-30|0|", "eventPointer|-30|0|", "eventPointer|-30|0|",
                        "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_TrackPad_Reg_App_043_C");
}

/*
 * Feature: Multi_HandOut_Trackball_Reg_003_C
 * Function: Multi_HandOut_Trackball_Reg_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Trackball_Reg_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "14010203273000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_003_C");
}

/*
 * Feature: Multi_HandOut_Trackball_Reg_009_C
 * Function: Multi_HandOut_Trackball_Reg_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Trackball_Reg_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_009_C");
}

/*
 * Feature: Multi_HandOut_Trackball_Reg_015_C
 * Function: Multi_HandOut_Trackball_Reg_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Trackball_Reg_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2"};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Trackball_Reg_015_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_003_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203164001", "09010203164000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|164|1", "eventKeyboard|164|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|10|1|", "eventKeyboard|10|0|"};
    ci.mixedkeyList = {{{"||"},{"3002","OnPause"},{"3001","OnPlay"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_003_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_008_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203164001", "09010203164000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|164|1", "eventKeyboard|164|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|10|1|", "eventKeyboard|10|0|"};
    ci.mixedkeyList = {{{"||"},{"3002","OnPause"},{"3001","OnPlay"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_008_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_013_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203103001", "09010203103000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|103|1", "eventKeyboard|103|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2012|1|", "eventKeyboard|2012|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_013_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_018_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203108001", "09010203108000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|108|1", "eventKeyboard|108|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2013|1|", "eventKeyboard|2013|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_018_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_023_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203105001", "09010203105000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|105|1", "eventKeyboard|105|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2014|1|", "eventKeyboard|2014|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_023_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_028_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203106001", "09010203106000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|106|1", "eventKeyboard|106|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2015|1|", "eventKeyboard|2015|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_028_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_033_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203139001", "09010203139000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|139|1", "eventKeyboard|139|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2067|1|", "eventKeyboard|2067|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_033_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_038_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203028001", "09010203028000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|28|1", "eventKeyboard|28|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2054|1|", "eventKeyboard|2054|0|"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnter"},{"1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_038_C");
}

/*
 * Feature: Multi_HandOut_RemoteControl_Reg_App_048_C
 * Function: Multi_HandOut_RemoteControl_Reg_App_048_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_RemoteControl_Reg_App_048_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203158001", "09010203158000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|158|1", "eventKeyboard|158|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2|1|", "eventKeyboard|2|0|"};
    ci.mixedkeyList = {{{"&&"},{"1113","OnBack"},{"4010","OnClosePage"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_RemoteControl_Reg_App_048_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_003_C
 * Function: Multi_HandOut_Keyboard_Reg_App_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "03010203109000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|109|1", "eventKeyboard|109|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|1|", "eventKeyboard|2069|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_003_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_008_C
 * Function: Multi_HandOut_Keyboard_Reg_App_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203103001", "03010203103000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|103|1", "eventKeyboard|103|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2012|1|", "eventKeyboard|2012|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_008_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_013_C
 * Function: Multi_HandOut_Keyboard_Reg_App_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203105001", "03010203105000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|105|1", "eventKeyboard|105|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2014|1|", "eventKeyboard|2014|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_013_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_018_C
 * Function: Multi_HandOut_Keyboard_Reg_App_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203104001", "03010203104000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|104|1", "eventKeyboard|104|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2068|1|", "eventKeyboard|2068|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_018_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_023_C
 * Function: Multi_HandOut_Keyboard_Reg_App_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203108001", "03010203108000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|108|1", "eventKeyboard|108|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2013|1|", "eventKeyboard|2013|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_023_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_028_C
 * Function: Multi_HandOut_Keyboard_Reg_App_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203106001", "03010203106000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|106|1", "eventKeyboard|106|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2015|1|", "eventKeyboard|2015|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_028_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_033_C
 * Function: Multi_HandOut_Keyboard_Reg_App_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203063001", "03010203063000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|63|1", "eventKeyboard|63|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2094|1|", "eventKeyboard|2094|0|"};
    ci.mixedkeyList = {{{"1107","OnRefresh"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_033_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_038_C
 * Function: Multi_HandOut_Keyboard_Reg_App_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203019001", "03010203019000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|19|1", "eventKeyboard|19|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2034|1|", "eventKeyboard|2034|0|",
                        "eventKeyboard|2072|0|"};
    ci.mixedkeyList = {{{""}}, {{"1107","OnRefresh"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_038_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_043_C
 * Function: Multi_HandOut_Keyboard_Reg_App_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203127001", "03010203127000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|127|1", "eventKeyboard|127|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2067|1|", "eventKeyboard|2067|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_043_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_048_C
 * Function: Multi_HandOut_Keyboard_Reg_App_048_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_048_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203042001", "03010203068001", "03010203068000", "03010203042000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|42|1", "eventKeyboard|68|1", "eventKeyboard|68|0",
                             "eventKeyboard|42|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2047|1|", "eventKeyboard|2099|1|", "eventKeyboard|2099|0|",
                        "eventKeyboard|2047|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_048_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_053_C
 * Function: Multi_HandOut_Keyboard_Reg_App_053_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_053_C, TestSize.Level0)
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
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_053_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_058_C
 * Function: Multi_HandOut_Keyboard_Reg_App_058_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_058_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203046001", "03010203046000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|46|1", "eventKeyboard|46|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2019|1|", "eventKeyboard|2019|0|",
                        "eventKeyboard|2072|0|"};
    ci.mixedkeyList = {{{""}}, {{"1103","OnCopy"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_058_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_063_C
 * Function: Multi_HandOut_Keyboard_Reg_App_063_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_063_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203097001", "03010203047001", "03010203047000", "03010203097000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|97|1", "eventKeyboard|47|1", "eventKeyboard|47|0",
                             "eventKeyboard|97|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2073|1|", "eventKeyboard|2038|1|", "eventKeyboard|2038|0|",
                        "eventKeyboard|2073|0|"};
    ci.mixedkeyList = {{{""}}, {{"1104","OnPaste"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_063_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_068_C
 * Function: Multi_HandOut_Keyboard_Reg_App_068_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_068_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203045001", "03010203045000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|45|1", "eventKeyboard|45|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2040|1|", "eventKeyboard|2040|0|",
                        "eventKeyboard|2072|0|"};
    ci.mixedkeyList = {{{""}}, {{"1105","OnCut"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_068_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_073_C
 * Function: Multi_HandOut_Keyboard_Reg_App_073_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_073_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203044001", "03010203044000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|44|1", "eventKeyboard|44|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2042|1|", "eventKeyboard|2042|0|",
                        "eventKeyboard|2072|0|"};
    ci.mixedkeyList = {{{""}}, {{"1106","OnUndo"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_073_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_078_C
 * Function: Multi_HandOut_Keyboard_Reg_App_078_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_078_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2119|1|", "eventKeyboard|2119|0|"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnter"},{"1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_078_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_083_C
 * Function: Multi_HandOut_Keyboard_Reg_App_083_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_083_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2070|1|", "eventKeyboard|2070|0|"};
    ci.mixedkeyList = {{{"&&"},{"1109","OnCancel"},{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_083_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_088_C
 * Function: Multi_HandOut_Keyboard_Reg_App_088_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_088_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203029001", "03010203025001", "03010203025000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|25|1", "eventKeyboard|25|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2032|1|", "eventKeyboard|2032|0|",
                        "eventKeyboard|2072|0|"};
    ci.mixedkeyList = {{{""}}, {{"1114","OnPrint"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_088_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_093_C
 * Function: Multi_HandOut_Keyboard_Reg_App_093_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_093_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203001001", "03010203001000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|1|1", "eventKeyboard|1|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2070|1|", "eventKeyboard|2070|0|"};
    ci.mixedkeyList = {{{"&&"},{"1109","OnCancel"},{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_093_C");
}

/*
 * Feature: Multi_HandOut_Keyboard_Reg_App_098_C
 * Function: Multi_HandOut_Keyboard_Reg_App_098_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Keyboard_Reg_App_098_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203096001", "03010203096000"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"eventKeyboard|96|1", "eventKeyboard|96|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2119|1|", "eventKeyboard|2119|0|"};
    ci.mixedkeyList = {{{"&&"},{"1110","OnEnter"},{"1102","OnSend"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_HandOut_Keyboard_Reg_App_098_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_003_C
 * Function: Multi_HandOut_Voice_Reg_APP_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"3002 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"3002","OnPause"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_003_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_008_C
 * Function: Multi_HandOut_Voice_Reg_APP_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"3001 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"3001","OnPlay"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_008_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_013_C
 * Function: Multi_HandOut_Voice_Reg_APP_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5001 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"5001","OnAnswer"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_013_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_018_C
 * Function: Multi_HandOut_Voice_Reg_APP_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5002 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"5002","OnRefuse"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_018_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_023_C
 * Function: Multi_HandOut_Voice_Reg_APP_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"5003 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"5003","OnHangup"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_023_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_028_C
 * Function: Multi_HandOut_Voice_Reg_APP_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1111 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_028_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_033_C
 * Function: Multi_HandOut_Voice_Reg_APP_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1112 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_033_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_038_C
 * Function: Multi_HandOut_Voice_Reg_APP_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1107 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1107","OnRefresh"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_038_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_043_C
 * Function: Multi_HandOut_Voice_Reg_APP_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1103 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1103","OnCopy"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_043_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_048_C
 * Function: Multi_HandOut_Voice_Reg_APP_048_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_048_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1104 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1104","OnPaste"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_048_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_053_C
 * Function: Multi_HandOut_Voice_Reg_APP_053_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_053_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1105 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1105","OnCut"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_053_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_058_C
 * Function: Multi_HandOut_Voice_Reg_APP_058_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_058_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1106 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1106","OnUndo"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_058_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_063_C
 * Function: Multi_HandOut_Voice_Reg_APP_063_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_063_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1101 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_063_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_068_C
 * Function: Multi_HandOut_Voice_Reg_APP_068_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_068_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1110 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1110","OnEnter"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_068_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_073_C
 * Function: Multi_HandOut_Voice_Reg_APP_073_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_073_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1109 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1109","OnCancel"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_073_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_078_C
 * Function: Multi_HandOut_Voice_Reg_APP_078_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_078_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1102 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1102","OnSend"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_078_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_083_C
 * Function: Multi_HandOut_Voice_Reg_APP_083_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_083_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1114 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1114","OnPrint"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_083_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_APP_088_C
 * Function: Multi_HandOut_Voice_Reg_APP_088_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_APP_088_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1113 1"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"1113","OnBack"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_APP_088_C");
}

/*
 * Feature: Multi_HandOut_Voice_Reg_Unusual_001_C
 * Function: Multi_HandOut_Voice_Reg_Unusual_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Voice_Reg_Unusual_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"3002 1*50"};
    ci.deviceMsg = {"Voice"};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{"3002","OnPause"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_HandOut_Voice_Reg_Unusual_001_C");
}

/*
 * Feature: Multi_HandOut_Phalangeal_Unusual_001_C
 * Function: Multi_HandOut_Phalangeal_Unusual_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Phalangeal_Unusual_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4001 1", "4002 1", "4003 1", "4004 1"};
    ci.deviceMsg = {"Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal"};
    ci.libinputExpectList = {"", "", "",
                             ""};
    ci.standardExpectList = {"/", "", "", ""};
    ci.expectL3Event = {"|", "|", "|",
                        "|"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_Unusual_001_C");
}

/*
 * Feature: Multi_HandOut_Phalangeal_Unusual_002_C
 * Function: Multi_HandOut_Phalangeal_Unusual_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_HandOut_Phalangeal_Unusual_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1",
                    "4001 1", "4002 1", "4003 1", "4004 1"};
    ci.deviceMsg = {"Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal",
                             "Phalangeal", "Phalangeal", "Phalangeal", "Phalangeal"};
    ci.libinputExpectList = {"", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             "", "", "",
                             ""};
    ci.standardExpectList = {"/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", "",
                             "/", "", "", ""};
    ci.expectL3Event = {"|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|",
                        "|"};
    ci.mixedkeyList = {{{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}, {{"4001","OnScreenShot"}}, {{"4002","OnScreenSplit"}}, {{"||"},{"4003","OnStartScreenRecord"}}, {{"||"},{"4004","OnStopScreenRecord"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci, "Multi_HandOut_Phalangeal_Unusual_002_C");
}
}