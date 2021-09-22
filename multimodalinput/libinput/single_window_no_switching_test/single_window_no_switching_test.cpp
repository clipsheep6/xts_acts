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
class SingleWindowNoSwitchingTest : public testing::Test {
public:
    void SetUpTestCase();
    void TearDownTestCase();
};

void SingleWindowNoSwitchingTest::SetUpTestCase()
{}

void SingleWindowNoSwitchingTest::TearDownTestCase()
{}

struct CaseInfo {
    std::vector<std::string> eventList = {""};
    std::vector<std::string> deviceMsg = {""};
    std::vector<std::string> libinputExpectList = {""};
    std::vector<std::string> standardExpectList = {""};
    std::vector<std::string> expectL3Event = {""};
    std::vector<std::string> dispatcherList = {""};
};

/*
 * Feature: AutoTestCommon
 * Function: AutoTestCommon
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
void AutoTestCommon(struct CaseInfo ci)
{
    for (unsigned int i = 0; i < ci.eventList.size(); i++) {
        AUTOTEST_MULTIINPUTCOMMON->InJectionEvent(ci.eventList[i], ci.deviceMsg[i]);
        std::string ExpectServerResult = "NULL|NULL|NULL |";
        std::string ExpectClientResult = "NULL|NULL|NULL |";
        if (ci.libinputExpectList[i] != "eventJoyStickAxis") {
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetLibinputValue(), ci.libinputExpectList[i]);
        } else {
            bool expectAxisResult = true;
            std::vector<float> axisStrList = AUTOTEST_DATAPROCESS->GetAxisStrList();
            for (unsigned int j = 0; j < axisStrList.size(); j++) {
                if (axisStrList[i] < -1 || axisStrList[i] > 1) {
                    expectAxisResult = false;
                    break;
                }
            }
            EXPECT_EQ(expectAxisResult , true);
        }
        EXPECT_EQ(AUTOTEST_DATAPROCESS->GetStandardResult(), ci.standardExpectList[i]);
        if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.dispatcherList[i] != "|1|0|0" &&
            ci.dispatcherList[i] != "|0|0|1") {
            ExpectServerResult = ci.expectL3Event[i] +
                      AUTOTEST_MULTIINPUTCOMMON->valueServer;
            ExpectClientResult = ci.expectL3Event[i] +
                      AUTOTEST_MULTIINPUTCOMMON->valueClient;
        }
        EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualServerResult(), ExpectServerResult);
        EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualClientResult(), ExpectClientResult);
        EXPECT_EQ((ci.dispatcherList[i] == AUTOTEST_DATAPROCESS->GetDispatcherStr()) ||
                  (ci.dispatcherList[i].find(AUTOTEST_DATAPROCESS->GetDispatcherStr()) != ci.dispatcherList[i].npos),
                  true);
        AUTOTEST_DATAPROCESS->ClearAll();
    }
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_touch_002_H
 * Function: Multi_HandOut_Mouse_Unreg_touch_002_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_touch_002_H, TestSize.Level0)
{
    AUTOTEST_MULTIINPUTCOMMON->InitClient("Scene_H");
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
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203272001", "01010203272000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_touch_013_H
 * Function: Multi_HandOut_Mouse_Unreg_touch_013_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_touch_013_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203272001", "01010203272000", "01010203272001", "01010203272000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_touch_024_H
 * Function: Multi_HandOut_Mouse_Unreg_touch_024_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_touch_024_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203272001", "01010203272000", "01010203272001", "01010203272000",
                    "01010203272001", "01010203272000", "01010203272001", "01010203272000",
                    "01010203272001", "01010203272000", "01010203272001", "01010203272000",
                    "01010203272001", "01010203272000", "01010203272001", "01010203272000",
                    "01010203272001", "01010203272000", "01010203272001", "01010203272000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_touch_035_H
 * Function: Multi_HandOut_Mouse_Unreg_touch_035_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_touch_035_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010303272001999", "01010303272000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_touch_046_H
 * Function: Multi_HandOut_Mouse_Unreg_touch_046_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_touch_046_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203272001", "01020203-35040", "01020203-15060", "01010203272000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|-35|40", "eventPointer|-15|60",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "400|502|272|1|-35|40", "400|502|272|1|-15|60", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_Untouch_122_H
 * Function: Multi_HandOut_Mouse_Unreg_Untouch_122_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_Untouch_122_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203273001", "01010203273000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_Untouch_132_H
 * Function: Multi_HandOut_Mouse_Unreg_Untouch_132_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_Untouch_132_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203273001", "01010203273000", "01010203273001", "01010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_Untouch_142_H
 * Function: Multi_HandOut_Mouse_Unreg_Untouch_142_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_Untouch_142_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203273001", "01010203273000", "01010203273001", "01010203273000",
                    "01010203273001", "01010203273000", "01010203273001", "01010203273000",
                    "01010203273001", "01010203273000", "01010203273001", "01010203273000",
                    "01010203273001", "01010203273000", "01010203273001", "01010203273000",
                    "01010203273001", "01010203273000", "01010203273001", "01010203273000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_Untouch_152_H
 * Function: Multi_HandOut_Mouse_Unreg_Untouch_152_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_Untouch_152_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010303273001999", "01010303273000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Mouse_Unreg_Untouch_162_H
 * Function: Multi_HandOut_Mouse_Unreg_Untouch_162_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Mouse_Unreg_Untouch_162_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"01010203273001", "01020203-35040", "01020203-15060", "01010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|60",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_067_H
 * Function: Multi_HandOut_TrackPad_Reg_067_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_067_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203272001", "19010203272000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_068_H
 * Function: Multi_HandOut_TrackPad_Reg_068_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_068_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203272001", "19010203272000", "19010203272001", "19010203272000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_069_H
 * Function: Multi_HandOut_TrackPad_Reg_069_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_069_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010303272001999", "19010303272000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_095_H
 * Function: Multi_HandOut_TrackPad_Reg_095_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_095_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19020203-35040"};
    ci.deviceMsg = {""};    
    ci.libinputExpectList = {"eventPointer|-35|40"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-35|40|"};
    ci.dispatcherList = {""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_096_H
 * Function: Multi_HandOut_TrackPad_Reg_096_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_096_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19020203350040"};
    ci.deviceMsg = {""};    
    ci.libinputExpectList = {"eventPointer|350|40"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|350|40|"};
    ci.dispatcherList = {""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_097_H
 * Function: Multi_HandOut_TrackPad_Reg_097_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_097_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19020203-03540"};
    ci.deviceMsg = {""};    
    ci.libinputExpectList = {"eventPointer|-3|540"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-3|540|"};
    ci.dispatcherList = {""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_105_H
 * Function: Multi_HandOut_TrackPad_Reg_105_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_105_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19020203350040"};
    ci.deviceMsg = {""};    
    ci.libinputExpectList = {"eventPointer|350|40"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|350|40|"};
    ci.dispatcherList = {""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_164_H
 * Function: Multi_HandOut_TrackPad_Reg_164_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_164_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_174_H
 * Function: Multi_HandOut_TrackPad_Reg_174_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_174_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000", "19010203273001", "19010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_184_H
 * Function: Multi_HandOut_TrackPad_Reg_184_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_184_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_194_H
 * Function: Multi_HandOut_TrackPad_Reg_194_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_194_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010303273001999", "19010303273000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_204_H
 * Function: Multi_HandOut_TrackPad_Reg_204_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_204_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19020203-35040", "19020203-15060", "19010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|60",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_224_H
 * Function: Multi_HandOut_TrackPad_Reg_224_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_224_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_225_H
 * Function: Multi_HandOut_TrackPad_Reg_225_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_225_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000", "19010203273001", "19010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_226_H
 * Function: Multi_HandOut_TrackPad_Reg_226_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_226_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000",
                    "19010203273001", "19010203273000", "19010203273001", "19010203273000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_TrackPad_Reg_227_H
 * Function: Multi_HandOut_TrackPad_Reg_227_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_TrackPad_Reg_227_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"19010303273001999", "19010303273000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_077_H
 * Function: Multi_HandOut_Trackball_UnReg_077_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_077_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203272001", "14010203272000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_088_H
 * Function: Multi_HandOut_Trackball_UnReg_088_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_088_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203272001", "14010203272000", "14010203272001", "14010203272000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_099_H
 * Function: Multi_HandOut_Trackball_UnReg_099_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_099_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203272001", "14010203272000", "14010203272001", "14010203272000",
                    "14010203272001", "14010203272000", "14010203272001", "14010203272000",
                    "14010203272001", "14010203272000", "14010203272001", "14010203272000",
                    "14010203272001", "14010203272000", "14010203272001", "14010203272000",
                    "14010203272001", "14010203272000", "14010203272001", "14010203272000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "402|500|272|1|0|0", "402|501|272|0|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_110_H
 * Function: Multi_HandOut_Trackball_UnReg_110_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_110_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010303272001999", "14010303272000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_121_H
 * Function: Multi_HandOut_Trackball_UnReg_121_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_121_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010303272001999", "14020203-45060", "14020203-15030", "14010303272000000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|-45|60", "eventPointer|-15|30",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "400|502|272|1|-45|60", "400|502|272|1|-15|30", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|-45|60|", "eventPointer|-15|30|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_132_H
 * Function: Multi_HandOut_Trackball_UnReg_132_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_132_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203272001", "14010203273001", "14010203272000", "14010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|272|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|1|0|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_143_H
 * Function: Multi_HandOut_Trackball_UnReg_143_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_143_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010303272001999", "14010303273001000", "14010303273000000", "14010303272000000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|1|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_154_H
 * Function: Multi_HandOut_Trackball_UnReg_154_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_154_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010303273001999", "14010303272001000", "14010303272000000", "14010303273000000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "402|500|272|1|0|0", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_175_H
 * Function: Multi_HandOut_Trackball_UnReg_175_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_175_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"03010203029001", "14010203272001", "14010203272000", "03010203029000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventPointer|272|1", "eventPointer|272|0",
                             "eventKeyboard|29|0"};
    ci.standardExpectList = {"/", "402|500|272|1|0|0", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventKeyboard|2072|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_191_H
 * Function: Multi_HandOut_Trackball_UnReg_191_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_191_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"03010203042001", "14010203272001", "14010203272000", "03010203042000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventKeyboard|42|1", "eventPointer|272|1", "eventPointer|272|0",
                             "eventKeyboard|42|0"};
    ci.standardExpectList = {"/", "402|500|272|1|0|0", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventKeyboard|2047|1|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventKeyboard|2047|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_208_H
 * Function: Multi_HandOut_Trackball_UnReg_208_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_208_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203273001", "14010203273000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_218_H
 * Function: Multi_HandOut_Trackball_UnReg_218_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_218_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203273001", "14010203273000", "14010203273001", "14010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_228_H
 * Function: Multi_HandOut_Trackball_UnReg_228_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_228_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203273001", "14010203273000", "14010203273001", "14010203273000",
                    "14010203273001", "14010203273000", "14010203273001", "14010203273000",
                    "14010203273001", "14010203273000", "14010203273001", "14010203273000",
                    "14010203273001", "14010203273000", "14010203273001", "14010203273000",
                    "14010203273001", "14010203273000", "14010203273001", "14010203273000"};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", "",
                             "", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0", "eventPointer|273|1",
                             "eventPointer|273|0", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|", "eventPointer|2|1|",
                        "eventPointer|2|0|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_238_H
 * Function: Multi_HandOut_Trackball_UnReg_238_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_238_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010303273001999", "14010303273000000"};
    ci.deviceMsg = {"", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|0|"};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci);
}

/*
 * Feature: Multi_HandOut_Trackball_UnReg_248_H
 * Function: Multi_HandOut_Trackball_UnReg_248_H
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
 AUTO_TEST_FUNC(SingleWindowNoSwitchingTest, Multi_HandOut_Trackball_UnReg_248_H, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {""}};
    ci.eventList = {"14010203273001", "14020203-35040", "14020203-15060", "14010203273000"};
    ci.deviceMsg = {"", "", "", ""};    
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|60",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "eventPointer|2|0|"};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci);
}
}