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
            std::string ExpectServerResult = "NULL|NULL|NULL|NULL|NULL |";
            std::string ExpectClientResult = "NULL|NULL|NULL|NULL|NULL |";
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetLibinputValue(), ci.libinputExpectList[i]);
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetStandardResult(), ci.standardExpectList[i]);
            if (ci.libinputExpectList[i] != "NULL|NULL|NULL " && ci.dispatcherList[i] != "|0|0|1" &&
                ci.dispatcherList[i] != "|1|0|0") {
                ExpectServerResult = ci.expectL3Event[i] + ci.deviceMsg[i] +
                    AUTOTEST_MULTIINPUTCOMMON->valueServer;
                ExpectClientResult = ci.expectL3Event[i] + ci.deviceMsg[i] +
                    AUTOTEST_MULTIINPUTCOMMON->valueClient;                         
            }
            if ((ci.dispatcherList[i] == "|0|0|1" || ci.dispatcherList[i] == "|1|0|0") &&
                ci.mixedkeyList[i][0][0] != "") {
                ExpectServerResult += AUTOTEST_MULTIINPUTCOMMON->valueServer;
                ExpectClientResult += AUTOTEST_MULTIINPUTCOMMON->valueClient;
            }
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualServerResult1(), ExpectServerResult);
            EXPECT_EQ(AUTOTEST_DATAPROCESS->GetActualClientResult1(), ExpectClientResult);
            EXPECT_EQ((ci.dispatcherList[i] == AUTOTEST_DATAPROCESS->GetDispatcherStr())
                     || (ci.dispatcherList[i].find(AUTOTEST_DATAPROCESS->GetDispatcherStr())!=
                     ci.dispatcherList[i].npos), true);
        }
        AutoExpectMixKey(ci.mixedkeyList, i);        
        AUTOTEST_DATAPROCESS->ClearAll();
    }
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_001_C
 * Function: Multi_Input_func_interac_Two_DdDc_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_001_C, TestSize.Level0)
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
    ci.eventList = {"142102020002", "01020203-35040", "01020203-15060"};
    ci.deviceMsg = {"2|9|", "2|3|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|-35|40", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|-35|40|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_001_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_002_C
 * Function: Multi_Input_func_interac_Two_DdDc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203-35040"};
    ci.deviceMsg = {"2|11|"};
    ci.libinputExpectList = {"eventPointer|-35|40"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-35|40|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_003_C
 * Function: Multi_Input_func_interac_Two_DdDc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0754020400050200"};
    ci.deviceMsg = {"7|5|"};
    ci.libinputExpectList = {"eventJoyStickAxis"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_004_C
 * Function: Multi_Input_func_interac_Two_DdDc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08630203005127"};
    ci.deviceMsg = {"7|6|"};
    ci.libinputExpectList = {"eventJoyStickAxis"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_005_C
 * Function: Multi_Input_func_interac_Two_DdDc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"41000300012010000", "42000000000010000", "0121020201-2"};
    ci.deviceMsg = {"0|1|", "0|1|", "2|3|"};
    ci.libinputExpectList = {"500|0|300|120", "501|0|0|0", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"500|0|300|120|", "501|0|0|0|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_006_C
 * Function: Multi_Input_func_interac_Two_DdDc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"41000200022010000", "43000300015010000", "42000000000010000"};
    ci.deviceMsg = {"0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"500|0|200|220", "502|0|300|150", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"500|0|200|220|", "502|0|300|150|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_007_C
 * Function: Multi_Input_func_interac_Two_DdDc_007_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_007_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07510203017-01", "07510203017000", "41000100010000000", "41010200010000000",
                    "41020300010010000", "43000100015000000", "43010200015000000", "43020300015010000",
                    "43000100031000000", "43010200031000000", "43020300031010000", "42000000000000000",
                    "42010000000000000", "42020000000010000"};
    ci.deviceMsg = {"7|5|", "7|5|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "500|0|100|100",
                             "500|1|200|100", "500|2|300|100", "502|0|100|150",
                             "502|1|200|150", "502|2|300|150", "502|0|100|310",
                             "502|1|200|310", "502|2|300|310", "501|0|0|0",
                             "501|1|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "500|0|100|100|",
                        "500|1|200|100|", "500|2|300|100|", "502|0|100|150|",
                        "502|1|200|150|", "502|2|300|150|", "502|0|100|310|",
                        "502|1|200|310|", "502|2|300|310|", "501|0|0|0|",
                        "501|1|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_007_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_008_C
 * Function: Multi_Input_func_interac_Two_DdDc_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08620203017-01", "08620203017000", "41000100010000000", "41010300010010000",
                    "43000100015000000", "43010300015010000", "42000000000000000", "42010000000010000"};
    ci.deviceMsg = {"7|6|", "7|6|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "500|0|100|100",
                             "500|1|300|100", "502|0|100|150", "502|1|300|150",
                             "501|0|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "500|0|100|100|",
                        "500|1|300|100|", "502|0|100|150|", "502|1|300|150|",
                        "501|0|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_008_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_009_C
 * Function: Multi_Input_func_interac_Two_DdDc_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203000-32", "41000125013710000", "43000125013710000", "42000000000010000"};
    ci.deviceMsg = {"2|3|", "0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventPointer|0|-32", "500|0|125|137", "502|0|125|137",
                             "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|0|-32|", "500|0|125|137|", "502|0|125|137|",
                        "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_009_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_010_C
 * Function: Multi_Input_func_interac_Two_DdDc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14020203015030", "14020203045060", "41000200022010000", "43000300015010000",
                    "42000000000010000"};
    ci.deviceMsg = {"2|9|", "2|9|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"eventPointer|15|30", "eventPointer|45|60", "500|0|200|220",
                             "502|0|300|150", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|15|30|", "eventPointer|45|60|", "500|0|200|220|",
                        "502|0|300|150|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_011_C
 * Function: Multi_Input_func_interac_Two_DdDc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203-35040", "41000100010000000", "41010200010000000", "41020300010010000",
                    "43000100015000000", "43010200015000000", "43020300015010000", "43000100031000000",
                    "43010200031000000", "43020300031010000", "42000000000000000", "42010000000000000",
                    "42020000000010000"};
    ci.deviceMsg = {"2|11|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "500|0|100|100", "500|1|200|100",
                             "500|2|300|100", "502|0|100|150", "502|1|200|150",
                             "502|2|300|150", "502|0|100|310", "502|1|200|310",
                             "502|2|300|310", "501|0|0|0", "501|1|0|0",
                             "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "500|0|100|100|", "500|1|200|100|",
                        "500|2|300|100|", "502|0|100|150|", "502|1|200|150|",
                        "502|2|300|150|", "502|0|100|310|", "502|1|200|310|",
                        "502|2|300|310|", "501|0|0|0|", "501|1|0|0|",
                        "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_012_C
 * Function: Multi_Input_func_interac_Two_DdDc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "41000100010000000", "41010300010010000", "42000000000000000",
                    "42010000000010000"};
    ci.deviceMsg = {"", "0|1|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"", "500|0|100|100", "500|1|300|100",
                             "501|0|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"|", "500|0|100|100|", "500|1|300|100|",
                        "501|0|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_013_C
 * Function: Multi_Input_func_interac_Two_DdDc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "01020203-35040", "01020203-15060"};
    ci.deviceMsg = {"", "2|3|", "2|3|"};
    ci.libinputExpectList = {"", "eventPointer|-35|40", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|-35|40|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_014_C
 * Function: Multi_Input_func_interac_Two_DdDc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "14020203015030", "14020203045060"};
    ci.deviceMsg = {"", "2|9|", "2|9|"};
    ci.libinputExpectList = {"", "eventPointer|15|30", "eventPointer|45|60"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|15|30|", "eventPointer|45|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_015_C
 * Function: Multi_Input_func_interac_Two_DdDc_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "19020203-35040"};
    ci.deviceMsg = {"", "2|11|"};
    ci.libinputExpectList = {"", "eventPointer|-35|40"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventPointer|-35|40|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_015_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_016_C
 * Function: Multi_Input_func_interac_Two_DdDc_016_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_016_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002"};
    ci.deviceMsg = {"2|3|"};
    ci.libinputExpectList = {"eventPointer|30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_016_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_017_C
 * Function: Multi_Input_func_interac_Two_DdDc_017_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_017_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07510203017-01", "07510203017000", "08630203005127"};
    ci.deviceMsg = {"7|5|", "7|5|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_017_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_018_C
 * Function: Multi_Input_func_interac_Two_DdDc_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "075302040001-500"};
    ci.deviceMsg = {"", "7|5|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_018_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_019_C
 * Function: Multi_Input_func_interac_Two_DdDc_019_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_019_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "03010203078001", "01010203272000", "03010203078000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventKeyboard|78|0", "eventPointer|272|0",
                             "eventKeyboard|78|1"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventKeyboard|2116|0|", "eventPointer|1|0|",
                        "eventKeyboard|2116|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_019_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_020_C
 * Function: Multi_Input_func_interac_Two_DdDc_020_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_020_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203055001", "01010203273000", "03010203055000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|55|0", "eventPointer|273|0",
                             "eventKeyboard|55|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2114|0|", "eventPointer|2|0|",
                        "eventKeyboard|2114|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_020_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_021_C
 * Function: Multi_Input_func_interac_Two_DdDc_021_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_021_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "03010203104001", "01010203274000", "03010203104000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventKeyboard|104|0", "eventPointer|274|0",
                             "eventKeyboard|104|40"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventKeyboard|2068|0|", "eventPointer|4|0|",
                        "eventKeyboard|2068|40|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_021_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_022_C
 * Function: Multi_Input_func_interac_Two_DdDc_022_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_022_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "01020203-35040", "14010203272000"};
    ci.deviceMsg = {"2|9|", "2|3|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|-35|40", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "400|502|272|1|-35|40", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|-35|40|", "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_022_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_023_C
 * Function: Multi_Input_func_interac_Two_DdDc_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "14020203-35040", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|9|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_023_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_024_C
 * Function: Multi_Input_func_interac_Two_DdDc_024_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_024_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"12010203274001", "14020203-35040", "12010203274000"};
    ci.deviceMsg = {"2|8|", "2|9|", "2|8|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|-35|40", "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventPointer|-35|40|", "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_024_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_025_C
 * Function: Multi_Input_func_interac_Two_DdDc_025_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_025_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "0753020400000800"};
    ci.deviceMsg = {"", "7|5|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_025_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_026_C
 * Function: Multi_Input_func_interac_Two_DdDc_026_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_026_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "0754020400050200"};
    ci.deviceMsg = {"", "7|5|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_026_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_027_C
 * Function: Multi_Input_func_interac_Two_DdDc_027_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_027_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "1221020201-1", "19010203273000"};
    ci.deviceMsg = {"2|11|", "2|8|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-15|0", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-15|0|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_027_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_028_C
 * Function: Multi_Input_func_interac_Two_DdDc_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"41000125013710000", "43000125013710000", "42000000000010000"};
    ci.deviceMsg = {"0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"500|0|125|137", "502|0|125|137", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"500|0|125|137|", "502|0|125|137|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_028_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_029_C
 * Function: Multi_Input_func_interac_Two_DdDc_029_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_029_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "41000100010000000", "41010300010010000", "42000000000000000",
                    "42010000000010000"};
    ci.deviceMsg = {"", "0|1|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"", "500|0|100|100", "500|1|300|100",
                             "501|0|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"|", "500|0|100|100|", "500|1|300|100|",
                        "501|0|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_029_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_030_C
 * Function: Multi_Input_func_interac_Two_DdDc_030_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_030_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "41000100010000000", "41010200010000000", "41020300010010000",
                    "42000000000000000", "42010000000000000", "42020000000010000"};
    ci.deviceMsg = {"", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "500|0|100|100", "500|1|200|100",
                             "500|2|300|100", "501|0|0|0", "501|1|0|0",
                             "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/"};
    ci.expectL3Event = {"|", "500|0|100|100|", "500|1|200|100|",
                        "500|2|300|100|", "501|0|0|0|", "501|1|0|0|",
                        "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_030_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_031_C
 * Function: Multi_Input_func_interac_Two_DdDc_031_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_031_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "33010203273001", "33010203273000", "14010203272000"};
    ci.deviceMsg = {"2|9|", "2|18|", "2|18|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_031_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_032_C
 * Function: Multi_Input_func_interac_Two_DdDc_032_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_032_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "12010203274001", "12010203274000", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|8|", "2|8|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|274|1", "eventPointer|274|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|4|1|", "eventPointer|4|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_032_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_033_C
 * Function: Multi_Input_func_interac_Two_DdDc_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203272001", "19010203272000"};
    ci.deviceMsg = {"2|11|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_033_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_034_C
 * Function: Multi_Input_func_interac_Two_DdDc_034_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_034_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203079001", "01020203-15060", "03010203079000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|79|0", "eventPointer|-15|60",
                             "eventKeyboard|79|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2104|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2104|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_034_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_035_C
 * Function: Multi_Input_func_interac_Two_DdDc_035_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_035_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203127001", "01020203-15060", "03010203127000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|127|0", "eventPointer|-15|60",
                             "eventKeyboard|127|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2067|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2067|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{"1101","OnShowMenu"}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_035_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_036_C
 * Function: Multi_Input_func_interac_Two_DdDc_036_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_036_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "10010203113001", "10010203113000", "01020203-15060"};
    ci.deviceMsg = {"2|3|", "1|8|", "1|8|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|113|60", "eventKeyboard|113|1",
                             "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|22|60|", "eventKeyboard|22|1|",
                        "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "|0|1|0,|1|0|0", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_036_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_037_C
 * Function: Multi_Input_func_interac_Two_DdDc_037_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_037_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203082001", "0121020201-2", "03010203082000"};
    ci.deviceMsg = {"1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|82|0", "eventPointer|-30|0", "eventKeyboard|82|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2103|0|", "eventPointer|-30|0|", "eventKeyboard|2103|0|"};
    ci.mixedkeyList = {{{""}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_037_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_038_C
 * Function: Multi_Input_func_interac_Two_DdDc_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "03010203109000"};
    ci.deviceMsg = {"1|4|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|109|-2", "eventKeyboard|109|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|-2|", "eventKeyboard|2069|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_038_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_039_C
 * Function: Multi_Input_func_interac_Two_DdDc_039_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_039_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2"};
    ci.deviceMsg = {"2|9|"};
    ci.libinputExpectList = {"eventPointer|-30|0"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_039_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_040_C
 * Function: Multi_Input_func_interac_Two_DdDc_040_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_040_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "41000125013710000", "43000125013710000", "42000000000010000"};
    ci.deviceMsg = {"", "0|1|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "500|0|125|137", "502|0|125|137",
                             "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"|", "500|0|125|137|", "502|0|125|137|",
                        "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_040_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_041_C
 * Function: Multi_Input_func_interac_Two_DdDc_041_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_041_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203062001", "41000100096000000", "43000100085000000", "03010203062000",
                    "43000100070000000", "42000000000000000"};
    ci.deviceMsg = {"1|4|", "0|1|", "0|1|", "1|4|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventKeyboard|62|1", "500|0|100|960", "502|0|100|850",
                             "eventKeyboard|62|", "502|0|100|700", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2093|1|", "500|0|100|960|", "502|0|100|850|",
                        "eventKeyboard|2093||", "502|0|100|700|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_041_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_042_C
 * Function: Multi_Input_func_interac_Two_DdDc_042_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_042_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203074001", "41000125013710000", "43000125013710000", "42000000000010000",
                    "09010203074000"};
    ci.deviceMsg = {"1|7|", "0|1|", "0|1|", "0|1|",
                             "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|74|1", "500|0|125|137", "502|0|125|137",
                             "501|0|0|0", "eventKeyboard|74|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventKeyboard|2115|1|", "500|0|125|137|", "502|0|125|137|",
                        "501|0|0|0|", "eventKeyboard|2115|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_042_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_043_C
 * Function: Multi_Input_func_interac_Two_DdDc_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203030001", "03010203030000"};
    ci.deviceMsg = {"1|4|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|30|1", "eventKeyboard|30|1"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventKeyboard|2017|1|", "eventKeyboard|2017|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_043_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_044_C
 * Function: Multi_Input_func_interac_Two_DdDc_044_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_044_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "09010203114001", "09010203114000"};
    ci.deviceMsg = {"", "1|7|", "1|7|"};
    ci.libinputExpectList = {"", "eventKeyboard|114|1", "eventKeyboard|114|1"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"|", "eventKeyboard|17|1|", "eventKeyboard|17|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_044_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdDc_045_C
 * Function: Multi_Input_func_interac_Two_DdDc_045_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdDc_045_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203087001", "09010203115001", "09010203115000", "03010203087000"};
    ci.deviceMsg = {"1|4|", "1|7|", "1|7|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|87|0", "eventKeyboard|115|0", "eventKeyboard|115|-2",
                             "eventKeyboard|87|40"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2100|0|", "eventKeyboard|16|0|", "eventKeyboard|16|-2|",
                        "eventKeyboard|2100|40|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdDc_045_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_001_C
 * Function: Multi_Input_func_interac_Three_DdDc_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2", "01020203-35040", "41000125013710000", "43000125013710000",
                    "42000000000010000"};
    ci.deviceMsg = {"2|9|", "2|3|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-35|40", "500|0|125|137",
                             "502|0|125|137", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-35|40|", "500|0|125|137|",
                        "502|0|125|137|", "501|0|0|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_001_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_002_C
 * Function: Multi_Input_func_interac_Three_DdDc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "08630203005127", "41000100096000000", "43000100085000000",
                    "43000100070000000", "42000000000000000"};
    ci.deviceMsg = {"", "7|6|", "0|1|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis", "500|0|100|960",
                             "502|0|100|850", "502|0|100|700", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|", "500|0|100|960|",
                        "502|0|100|850|", "502|0|100|700|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_003_C
 * Function: Multi_Input_func_interac_Three_DdDc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203-35040", "0754020400050200", "41000200022010000", "43000300015010000",
                    "42000000000010000"};
    ci.deviceMsg = {"2|11|", "7|5|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventJoyStickAxis", "500|0|200|220",
                             "502|0|300|150", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventJoyStickAxis|", "500|0|200|220|",
                        "502|0|300|150|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_004_C
 * Function: Multi_Input_func_interac_Three_DdDc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "01020203-35040", "01020203-15060", "142102020002"};
    ci.deviceMsg = {"", "2|3|", "2|3|", "2|9|"};
    ci.libinputExpectList = {"", "eventPointer|-35|40", "eventPointer|-15|60",
                             "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "eventPointer|30|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_005_C
 * Function: Multi_Input_func_interac_Three_DdDc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "14020203015030", "14020203045060", "08630203001100",
                    "08630203001254"};
    ci.deviceMsg = {"", "2|9|", "2|9|", "7|6|",
                             "7|6|"};
    ci.libinputExpectList = {"", "eventPointer|15|30", "eventPointer|45|60",
                             "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"|", "eventPointer|15|30|", "eventPointer|45|60|",
                        "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_006_C
 * Function: Multi_Input_func_interac_Three_DdDc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "19020203-35040", "0754020400020100"};
    ci.deviceMsg = {"", "2|11|", "7|5|"};
    ci.libinputExpectList = {"", "eventPointer|-35|40", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|-35|40|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_007_C
 * Function: Multi_Input_func_interac_Three_DdDc_007_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_007_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "01020203-35040", "01020203-15060", "41000200022010000",
                    "42000000000010000"};
    ci.deviceMsg = {"", "2|3|", "2|3|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"", "eventPointer|-35|40", "eventPointer|-15|60",
                             "500|0|200|220", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"|", "eventPointer|-35|40|", "eventPointer|-15|60|",
                        "500|0|200|220|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_007_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_008_C
 * Function: Multi_Input_func_interac_Three_DdDc_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "14020203015030", "14020203045060", "41000200022010000",
                    "43000300015010000", "42000000000010000"};
    ci.deviceMsg = {"", "2|9|", "2|9|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "eventPointer|15|30", "eventPointer|45|60",
                             "500|0|200|220", "502|0|300|150", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|15|30|", "eventPointer|45|60|",
                        "500|0|200|220|", "502|0|300|150|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_008_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_009_C
 * Function: Multi_Input_func_interac_Three_DdDc_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203-35040", "41000100010000000", "41010200010000000", "41020300010010000",
                    "43000100015000000", "43010200015000000", "43020300015010000", "43000100031000000",
                    "43010200031000000", "43020300031010000", "42000000000000000", "42010000000000000",
                    "42020000000010000"};
    ci.deviceMsg = {"2|11|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "500|0|100|100", "500|1|200|100",
                             "500|2|300|100", "502|0|100|150", "502|1|200|150",
                             "502|2|300|150", "502|0|100|310", "502|1|200|310",
                             "502|2|300|310", "501|0|0|0", "501|1|0|0",
                             "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "500|0|100|100|", "500|1|200|100|",
                        "500|2|300|100|", "502|0|100|150|", "502|1|200|150|",
                        "502|2|300|150|", "502|0|100|310|", "502|1|200|310|",
                        "502|2|300|310|", "501|0|0|0|", "501|1|0|0|",
                        "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_009_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_010_C
 * Function: Multi_Input_func_interac_Three_DdDc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002", "41000125013712000", "43000125013710000", "43000125013710000",
                    "43000125013710000", "43000125013710000", "42000000000010000", "01020203-35040",
                    "01020203-15060"};
    ci.deviceMsg = {"2|3|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "2|3|",
                             "2|3|"};
    ci.libinputExpectList = {"eventPointer|30|0", "500|0|125|137", "502|0|125|137",
                             "502|0|125|137", "502|0|125|137", "502|0|125|137",
                             "501|0|0|0", "eventPointer|-35|40", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "500|0|125|137|", "502|0|125|137|",
                        "502|0|125|137|", "502|0|125|137|", "502|0|125|137|",
                        "501|0|0|0|", "eventPointer|-35|40|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_011_C
 * Function: Multi_Input_func_interac_Three_DdDc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07510203017-01", "07510203017000", "08630203005127", "41000200022010000",
                    "43000300015010000", "42000000000010000"};
    ci.deviceMsg = {"7|5|", "7|5|", "7|6|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "500|0|200|220", "502|0|300|150", "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "500|0|200|220|", "502|0|300|150|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_012_C
 * Function: Multi_Input_func_interac_Three_DdDc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "075302040001-500", "41000100010000000", "41010200010000000",
                    "41020300010010000", "43000100015000000", "43010200015000000", "43020300015010000",
                    "43000100031000000", "43010200031000000", "43020300031010000", "42000000000000000",
                    "42010000000000000", "42020000000010000"};
    ci.deviceMsg = {"", "7|5|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis", "500|0|100|100",
                             "500|1|200|100", "500|2|300|100", "502|0|100|150",
                             "502|1|200|150", "502|2|300|150", "502|0|100|310",
                             "502|1|200|310", "502|2|300|310", "501|0|0|0",
                             "501|1|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|", "500|0|100|100|",
                        "500|1|200|100|", "500|2|300|100|", "502|0|100|150|",
                        "502|1|200|150|", "502|2|300|150|", "502|0|100|310|",
                        "502|1|200|310|", "502|2|300|310|", "501|0|0|0|",
                        "501|1|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_013_C
 * Function: Multi_Input_func_interac_Three_DdDc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "03010203078001", "21020203-35040", "01010203272000",
                    "03010203078000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|12|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventKeyboard|78|0", "eventPointer|-35|40",
                             "eventPointer|272|0", "eventKeyboard|78|1"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0",
                             "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventKeyboard|2116|0|", "eventPointer|-35|40|",
                        "eventPointer|1|0|", "eventKeyboard|2116|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_014_C
 * Function: Multi_Input_func_interac_Three_DdDc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203055001", "21020203-35040", "01010203273000",
                    "03010203055000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|12|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|55|0", "eventPointer|-35|40",
                             "eventPointer|273|0", "eventKeyboard|55|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2114|0|", "eventPointer|-35|40|",
                        "eventPointer|2|0|", "eventKeyboard|2114|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_015_C
 * Function: Multi_Input_func_interac_Three_DdDc_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203104001", "14020203-35040", "01010203273000",
                    "03010203104000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|9|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|104|0", "eventPointer|-35|40",
                             "eventPointer|273|0", "eventKeyboard|104|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2068|0|", "eventPointer|-35|40|",
                        "eventPointer|2|0|", "eventKeyboard|2068|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_015_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_016_C
 * Function: Multi_Input_func_interac_Three_DdDc_016_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_016_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "03010203078001", "0753020400000800", "01010203272000",
                    "03010203078000"};
    ci.deviceMsg = {"2|3|", "1|4|", "7|5|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventKeyboard|78|0", "eventJoyStickAxis",
                             "eventPointer|272|0", "eventKeyboard|78|1"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0",
                             "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventKeyboard|2116|0|", "eventJoyStickAxis|",
                        "eventPointer|1|0|", "eventKeyboard|2116|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_016_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_017_C
 * Function: Multi_Input_func_interac_Three_DdDc_017_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_017_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203055001", "0754020400050200", "01010203273000",
                    "03010203055000"};
    ci.deviceMsg = {"2|3|", "1|4|", "7|5|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|55|0", "eventJoyStickAxis",
                             "eventPointer|273|0", "eventKeyboard|55|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2114|0|", "eventJoyStickAxis|",
                        "eventPointer|2|0|", "eventKeyboard|2114|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_017_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_018_C
 * Function: Multi_Input_func_interac_Three_DdDc_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203104001", "122102020101", "01010203273000",
                    "03010203104000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|8|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|104|0", "eventPointer|15|0",
                             "eventPointer|273|0", "eventKeyboard|104|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2068|0|", "eventPointer|15|0|",
                        "eventPointer|2|0|", "eventKeyboard|2068|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1112","OnNext"}}, {{""}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_018_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_019_C
 * Function: Multi_Input_func_interac_Three_DdDc_019_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_019_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "03010203078001", "41000125013710000", "43000125013710000",
                    "42000000000010000", "01010203272000", "03010203078000"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventKeyboard|78|1", "500|0|125|137",
                             "502|0|125|137", "501|0|0|0", "eventPointer|272|0",
                             "eventKeyboard|78|1"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "/",
                             "/", "402|501|272|0|0|0", "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventKeyboard|2116|1|", "500|0|125|137|",
                        "502|0|125|137|", "501|0|0|0|", "eventPointer|1|0|",
                        "eventKeyboard|2116|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_019_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_020_C
 * Function: Multi_Input_func_interac_Three_DdDc_020_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_020_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203055001", "41000100010000000", "41010300010010000",
                    "42000000000000000", "42010000000010000", "01010203273000", "03010203055000"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|55|1", "500|0|100|100",
                             "500|1|300|100", "501|0|0|0", "501|1|0|0",
                             "eventPointer|273|0", "eventKeyboard|55|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2114|1|", "500|0|100|100|",
                        "500|1|300|100|", "501|0|0|0|", "501|1|0|0|",
                        "eventPointer|2|0|", "eventKeyboard|2114|1|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_020_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_021_C
 * Function: Multi_Input_func_interac_Three_DdDc_021_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_021_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "03010203104001", "41000100010000000", "41010200010000000",
                    "41020300010010000", "42000000000000000", "42010000000000000", "42020000000010000",
                    "01010203273000", "03010203104000"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventKeyboard|104|1", "500|0|100|100",
                             "500|1|200|100", "500|2|300|100", "501|0|0|0",
                             "501|1|0|0", "501|1|0|0", "eventPointer|273|0",
                             "eventKeyboard|104|40"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventKeyboard|2068|1|", "500|0|100|100|",
                        "500|1|200|100|", "500|2|300|100|", "501|0|0|0|",
                        "501|1|0|0|", "501|1|0|0|", "eventPointer|2|0|",
                        "eventKeyboard|2068|40|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_021_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_022_C
 * Function: Multi_Input_func_interac_Three_DdDc_022_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_022_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "01020203-35040", "0753020400000800", "14010203272000"};
    ci.deviceMsg = {"2|9|", "2|3|", "7|5|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|-35|40", "eventJoyStickAxis",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "400|502|272|1|-35|40", "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|-35|40|", "eventJoyStickAxis|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_022_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_023_C
 * Function: Multi_Input_func_interac_Three_DdDc_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "01020203-35040", "0754020400050200", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|3|", "7|5|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventJoyStickAxis",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventJoyStickAxis|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_023_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_024_C
 * Function: Multi_Input_func_interac_Three_DdDc_024_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_024_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "14020203-35040", "2921020201-1", "01010203274000"};
    ci.deviceMsg = {"2|3|", "2|9|", "1|17|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|-35|40", "eventPointer|-15|0",
                             "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventPointer|-35|40|", "eventPointer|-15|0|",
                        "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1111","OnPrevious"}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_024_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_025_C
 * Function: Multi_Input_func_interac_Three_DdDc_025_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_025_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "01020203-35040", "14010203272000", "41000125013710000",
                    "43000125013710000", "42000000000010000"};
    ci.deviceMsg = {"2|9|", "2|3|", "2|9|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|-35|40", "eventPointer|272|0",
                             "500|0|125|137", "502|0|125|137", "501|0|0|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "400|502|272|1|-35|40", "402|501|272|0|0|0", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|-35|40|", "eventPointer|1|0|",
                        "500|0|125|137|", "502|0|125|137|", "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_025_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_026_C
 * Function: Multi_Input_func_interac_Three_DdDc_026_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_026_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "01020203-35040", "41000100010000000", "41010300010010000",
                    "42000000000000000", "42010000000010000", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|3|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "500|0|100|100",
                             "500|1|300|100", "501|0|0|0", "501|1|0|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "500|0|100|100|",
                        "500|1|300|100|", "501|0|0|0|", "501|1|0|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_026_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_027_C
 * Function: Multi_Input_func_interac_Three_DdDc_027_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_027_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "14020203-35040", "41000100010000000", "41010200010000000",
                    "41020300010010000", "42000000000000000", "42010000000000000", "42020000000010000",
                    "01010203274000"};
    ci.deviceMsg = {"2|3|", "2|9|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "2|3|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|-35|40", "500|0|100|100",
                             "500|1|200|100", "500|2|300|100", "501|0|0|0",
                             "501|1|0|0", "501|1|0|0", "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventPointer|-35|40|", "500|0|100|100|",
                        "500|1|200|100|", "500|2|300|100|", "501|0|0|0|",
                        "501|1|0|0|", "501|1|0|0|", "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_027_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_028_C
 * Function: Multi_Input_func_interac_Three_DdDc_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "0753020400000800", "41000125013710000", "42000000000010000"};
    ci.deviceMsg = {"", "7|5|", "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis", "500|0|125|137",
                             "501|0|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|", "500|0|125|137|",
                        "501|0|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_028_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_029_C
 * Function: Multi_Input_func_interac_Three_DdDc_029_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_029_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"", "0754020400050200", "41000100010000000", "41010300010010000",
                    "42000000000000000", "42010000000010000"};
    ci.deviceMsg = {"", "7|5|", "0|1|", "0|1|",
                             "0|1|", "0|1|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis", "500|0|100|100",
                             "500|1|300|100", "501|0|0|0", "501|1|0|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|", "500|0|100|100|",
                        "500|1|300|100|", "501|0|0|0|", "501|1|0|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_029_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_030_C
 * Function: Multi_Input_func_interac_Three_DdDc_030_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_030_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "41000100010000000", "41010200010000000", "41020300010010000",
                    "42000000000000000", "42010000000000000", "42020000000010000", "012102020101",
                    "19010203273000"};
    ci.deviceMsg = {"2|11|", "0|1|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "2|3|",
                             "2|11|"};
    ci.libinputExpectList = {"eventPointer|273|1", "500|0|100|100", "500|1|200|100",
                             "500|2|300|100", "501|0|0|0", "501|1|0|0",
                             "501|1|0|0", "eventPointer|15|0", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "500|0|100|100|", "500|1|200|100|",
                        "500|2|300|100|", "501|0|0|0|", "501|1|0|0|",
                        "501|1|0|0|", "eventPointer|15|0|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_030_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_031_C
 * Function: Multi_Input_func_interac_Three_DdDc_031_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_031_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "01010203273001", "19010203272001", "19010203272000",
                    "01010203273000", "14010203272000"};
    ci.deviceMsg = {"2|9|", "2|3|", "2|11|", "2|11|",
                             "2|3|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|272|1",
                             "eventPointer|272|0", "eventPointer|273|0", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "402|500|272|1|0|0", "402|501|272|0|0|0",
                             "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|1|1|",
                        "eventPointer|1|0|", "eventPointer|2|0|", "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_031_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_032_C
 * Function: Multi_Input_func_interac_Three_DdDc_032_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_032_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "01010203274001", "01010203274000", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|3|", "2|3|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|274|1", "eventPointer|274|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|4|1|", "eventPointer|4|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_032_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_033_C
 * Function: Multi_Input_func_interac_Three_DdDc_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203272001", "19010203272000"};
    ci.deviceMsg = {"2|11|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_033_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_034_C
 * Function: Multi_Input_func_interac_Three_DdDc_034_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_034_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203079001", "192102020102", "01020203-15060",
                    "03010203079000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|11|", "2|3|",
                             "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|79|60", "eventPointer|30|0",
                             "eventPointer|-15|60", "eventKeyboard|79|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2104|60|", "eventPointer|30|0|",
                        "eventPointer|-15|60|", "eventKeyboard|2104|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1112","OnNext"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_034_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_035_C
 * Function: Multi_Input_func_interac_Three_DdDc_035_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_035_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203127001", "01020203-15060", "03010203127000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|127|0", "eventPointer|-15|60",
                             "eventKeyboard|127|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2067|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2067|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{"1101","OnShowMenu"}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_035_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_036_C
 * Function: Multi_Input_func_interac_Three_DdDc_036_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_036_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14020203-35040", "08010203288001", "075302040001-500", "08010203288000",
                    "14020203-15060"};
    ci.deviceMsg = {"2|9|", "7|6|", "7|5|", "7|6|",
                             "2|9|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventJoyStickKey|288|1", "eventJoyStickAxis",
                             "eventJoyStickKey|288|0", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2401|1|", "eventJoyStickAxis|",
                        "eventKeyboard|2401|0|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_036_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_037_C
 * Function: Multi_Input_func_interac_Three_DdDc_037_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_037_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203079001", "41000125013710000", "43000125013710000",
                    "43000125013710000", "43000125013710000", "43000125013710000", "42000000000010000",
                    "01020203-15060", "03010203079000"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|79|1", "500|0|125|137",
                             "502|0|125|137", "502|0|125|137", "502|0|125|137",
                             "502|0|125|137", "501|0|0|0", "eventPointer|-15|60",
                             "eventKeyboard|79|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2104|1|", "500|0|125|137|",
                        "502|0|125|137|", "502|0|125|137|", "502|0|125|137|",
                        "502|0|125|137|", "501|0|0|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2104|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_037_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_038_C
 * Function: Multi_Input_func_interac_Three_DdDc_038_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_038_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203127001", "41000100096000000", "43000100085000000",
                    "01020203-15060", "43000100070000000", "42000000000000000", "03010203127000"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "2|3|", "0|1|", "0|1|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|127|1", "500|0|100|960",
                             "502|0|100|850", "eventPointer|-15|60", "502|0|100|700",
                             "501|0|0|0", "eventKeyboard|127|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2067|1|", "500|0|100|960|",
                        "502|0|100|850|", "eventPointer|-15|60|", "502|0|100|700|",
                        "501|0|0|0|", "eventKeyboard|2067|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"1101","OnShowMenu"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_038_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_039_C
 * Function: Multi_Input_func_interac_Three_DdDc_039_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_039_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "10010203113001", "41000125013710000", "43000125013710000",
                    "43000125013710000", "43000125013710000", "43000125013710000", "42000000000010000",
                    "10010203113000", "01020203-15060"};
    ci.deviceMsg = {"2|3|", "1|8|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "0|1|", "0|1|",
                             "1|8|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|113|1", "500|0|125|137",
                             "502|0|125|137", "502|0|125|137", "502|0|125|137",
                             "502|0|125|137", "501|0|0|0", "eventKeyboard|113|40",
                             "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|22|1|", "500|0|125|137|",
                        "502|0|125|137|", "502|0|125|137|", "502|0|125|137|",
                        "502|0|125|137|", "501|0|0|0|", "eventKeyboard|22|40|",
                        "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_039_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_040_C
 * Function: Multi_Input_func_interac_Three_DdDc_040_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_040_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203079001", "01020203-15060", "03010203079000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|79|0", "eventPointer|-15|60",
                             "eventKeyboard|79|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2104|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2104|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_040_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_041_C
 * Function: Multi_Input_func_interac_Three_DdDc_041_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_041_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "03010203127001", "01020203-15060", "03010203127000"};
    ci.deviceMsg = {"2|3|", "1|4|", "2|3|", "1|4|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|127|0", "eventPointer|-15|60",
                             "eventKeyboard|127|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2067|0|", "eventPointer|-15|60|",
                        "eventKeyboard|2067|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{"1101","OnShowMenu"}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_041_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_042_C
 * Function: Multi_Input_func_interac_Three_DdDc_042_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_042_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14020203-35040", "09010203207001", "09010203207000", "08010203291001",
                    "08010203291000", "14020203-15060"};
    ci.deviceMsg = {"2|9|", "1|7|", "1|7|", "7|6|",
                             "7|6|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventKeyboard|207|1", "eventKeyboard|207|0",
                             "eventJoyStickKey|291|1", "eventJoyStickKey|291|0", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventKeyboard|2085|1|", "eventKeyboard|2085|0|",
                        "eventKeyboard|2404|1|", "eventKeyboard|2404|0|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{"3001","OnPlay"}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "|0|1|0,|1|0|0", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_042_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_043_C
 * Function: Multi_Input_func_interac_Three_DdDc_043_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_043_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "03010203082001", "41000125013710000", "43000125013710000",
                    "42000000000010000", "03010203082000", "0121020201-2"};
    ci.deviceMsg = {"2|3|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "1|4|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventKeyboard|82|1", "500|0|125|137",
                             "502|0|125|137", "501|0|0|0", "eventKeyboard|82|-2",
                             "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventKeyboard|2103|1|", "500|0|125|137|",
                        "502|0|125|137|", "501|0|0|0|", "eventKeyboard|2103|-2|",
                        "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_043_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_046_C
 * Function: Multi_Input_func_interac_Three_DdDc_046_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_046_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "03010203082001", "09010203207001", "09010203207000",
                    "03010203082000", "0121020201-2"};
    ci.deviceMsg = {"2|3|", "1|4|", "1|7|", "1|7|",
                             "1|4|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventKeyboard|82|0", "eventKeyboard|207|0",
                             "eventKeyboard|207|-2", "eventKeyboard|82|1", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventKeyboard|2103|0|", "eventKeyboard|2085|0|",
                        "eventKeyboard|2085|-2|", "eventKeyboard|2103|1|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", "", "|0|1|0,|1|0|0", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_046_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_050_C
 * Function: Multi_Input_func_interac_Three_DdDc_050_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_050_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203217001", "03010203062001", "41000100096000000", "43000100085000000",
                    "43000100070000000", "42000000000000000", "03010203062000", "09010203217000"};
    ci.deviceMsg = {"1|7|", "1|4|", "0|1|", "0|1|",
                             "0|1|", "0|1|", "1|4|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|217|1", "eventKeyboard|62|1", "500|0|100|960",
                             "502|0|100|850", "502|0|100|700", "501|0|0|0",
                             "eventKeyboard|62|1", "eventKeyboard|217|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|9|1|", "eventKeyboard|2093|1|", "500|0|100|960|",
                        "502|0|100|850|", "502|0|100|700|", "501|0|0|0|",
                        "eventKeyboard|2093|1|", "eventKeyboard|9|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"4012","OnMute"}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_050_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_052_C
 * Function: Multi_Input_func_interac_Three_DdDc_052_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_052_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203744001", "07010203314001", "03010203030001", "03010203030000",
                    "07010203314000", "09010203744000"};
    ci.deviceMsg = {"1|7|", "7|5|", "1|4|", "1|4|",
                             "7|5|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|744|1", "eventJoyStickKey|314|1", "eventKeyboard|30|0",
                             "eventKeyboard|30|0", "eventJoyStickKey|314|0", "eventKeyboard|744|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|744|1|", "eventKeyboard|2311|1|", "eventKeyboard|2017|0|",
                        "eventKeyboard|2017|0|", "eventKeyboard|2311|0|", "eventKeyboard|744|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_052_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_053_C
 * Function: Multi_Input_func_interac_Three_DdDc_053_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_053_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08010203291001", "03010203029001", "22010203046001", "22010203046000",
                    "03010203029000", "08010203291000"};
    ci.deviceMsg = {"7|6|", "1|4|", "1|13|", "1|13|",
                             "1|4|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickKey|291|1", "eventKeyboard|29|0", "eventKeyboard|46|0",
                             "eventKeyboard|46|0", "eventKeyboard|29|1", "eventJoyStickKey|291|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2404|1|", "eventKeyboard|2072|0|", "eventKeyboard|2019|0|",
                        "eventKeyboard|2019|0|", "eventKeyboard|2072|1|", "eventKeyboard|2404|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_053_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_DdDc_055_C
 * Function: Multi_Input_func_interac_Three_DdDc_055_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_DdDc_055_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "07500203304001", "26500203307001", "26500203307000",
                    "07500203304000", "03010203109000"};
    ci.deviceMsg = {"1|4|", "7|5|", "7|14|", "7|14|",
                             "7|5|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|109|1", "eventJoyStickKey|304|1", "eventJoyStickKey|307|1",
                             "eventJoyStickKey|307|0", "eventJoyStickKey|304|0", "eventKeyboard|109|-2"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|1|", "eventKeyboard|2301|1|", "eventKeyboard|2304|1|",
                        "eventKeyboard|2304|0|", "eventKeyboard|2301|0|", "eventKeyboard|2069|-2|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_DdDc_055_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_001_C
 * Function: Multi_Input_func_interac_Two_SdDc_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"21020203-35040", "0121020201-2", "21020203-15060"};
    ci.deviceMsg = {"2|12|", "2|3|", "2|12|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventPointer|-30|0", "eventPointer|-15|60"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventPointer|-30|0|", "eventPointer|-15|60|"};
    ci.mixedkeyList = {{{""}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_001_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_002_C
 * Function: Multi_Input_func_interac_Two_SdDc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203-35040", "372102020102"};
    ci.deviceMsg = {"2|11|", "2|20|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{""}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_003_C
 * Function: Multi_Input_func_interac_Two_SdDc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_004_C
 * Function: Multi_Input_func_interac_Two_SdDc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"26510203017-01", "075302040001-500", "26510203017000"};
    ci.deviceMsg = {"7|14|", "7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_005_C
 * Function: Multi_Input_func_interac_Two_SdDc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"075302040001-500", "2654020400020100"};
    ci.deviceMsg = {"7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_006_C
 * Function: Multi_Input_func_interac_Two_SdDc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08620203017-01", "276302040001-123", "2763020401030001", "276302040001-323",
                    "2763020401030000", "08620203017000"};
    ci.deviceMsg = {"7|6|", "7|15|", "7|15|", "7|15|",
                             "7|15|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_010_C
 * Function: Multi_Input_func_interac_Two_SdDc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "29010203113001", "01010203274000", "29010203113000"};
    ci.deviceMsg = {"2|3|", "1|17|", "2|3|", "1|17|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventKeyboard|113|0", "eventPointer|274|0",
                             "eventKeyboard|113|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventKeyboard|22|0|", "eventPointer|4|0|",
                        "eventKeyboard|22|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_011_C
 * Function: Multi_Input_func_interac_Two_SdDc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_012_C
 * Function: Multi_Input_func_interac_Two_SdDc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "21020203-35040", "01010203273000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_013_C
 * Function: Multi_Input_func_interac_Two_SdDc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "37020203-35040", "19010203273000"};
    ci.deviceMsg = {"2|11|", "2|20|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_014_C
 * Function: Multi_Input_func_interac_Two_SdDc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_015_C
 * Function: Multi_Input_func_interac_Two_SdDc_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "2121020201-1", "01010203273000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-15|0", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-15|0|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_015_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_016_C
 * Function: Multi_Input_func_interac_Two_SdDc_016_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_016_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "3321020201-1", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|18|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-15|0", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-15|0|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_016_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_017_C
 * Function: Multi_Input_func_interac_Two_SdDc_017_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_017_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "3721020201-1", "19010203273000"};
    ci.deviceMsg = {"2|11|", "2|20|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-15|0", "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-15|0|", "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_017_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_018_C
 * Function: Multi_Input_func_interac_Two_SdDc_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "21010203273001", "21010203273000", "01010203272000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|12|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_018_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_019_C
 * Function: Multi_Input_func_interac_Two_SdDc_019_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_019_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203272001", "38010203273001", "38010203273000", "19010203272000"};
    ci.deviceMsg = {"2|11|", "2|20|", "2|20|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_019_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_020_C
 * Function: Multi_Input_func_interac_Two_SdDc_020_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_020_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_020_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_021_C
 * Function: Multi_Input_func_interac_Two_SdDc_021_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_021_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_021_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_022_C
 * Function: Multi_Input_func_interac_Two_SdDc_022_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_022_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_022_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_023_C
 * Function: Multi_Input_func_interac_Two_SdDc_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08600203295001", "27630203000345", "27630203106001", "27630203000445",
                    "27630203106000", "08600203295000"};
    ci.deviceMsg = {"7|6|", "7|15|", "7|15|", "7|15|",
                             "7|15|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickKey|295|1", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickKey|295|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2408|1|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|", "eventJoyStickAxis|", "eventKeyboard|2408|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_023_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_024_C
 * Function: Multi_Input_func_interac_Two_SdDc_024_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_024_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"26500203304001", "075302040001-500", "26500203304000"};
    ci.deviceMsg = {"7|14|", "7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickKey|304|1", "eventJoyStickAxis", "eventJoyStickKey|304|0"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2301|1|", "eventJoyStickAxis|", "eventKeyboard|2301|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_024_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_025_C
 * Function: Multi_Input_func_interac_Two_SdDc_025_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_025_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_025_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_026_C
 * Function: Multi_Input_func_interac_Two_SdDc_026_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_026_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203386001", "28010203379001", "28010203379000", "09010203386000"};
    ci.deviceMsg = {"1|7|", "1|16|", "1|16|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|386|0", "eventKeyboard|379|0", "eventKeyboard|379|1",
                             "eventKeyboard|386|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2679|0|", "eventKeyboard|2674|0|", "eventKeyboard|2674|1|",
                        "eventKeyboard|2679|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_026_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdDc_027_C
 * Function: Multi_Input_func_interac_Two_SdDc_027_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdDc_027_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"22010203029001", "03010203046001", "03010203046000", "22010203029000"};
    ci.deviceMsg = {"1|13|", "1|4|", "1|4|", "1|13|"};
    ci.libinputExpectList = {"eventKeyboard|29|0", "eventKeyboard|46|0", "eventKeyboard|46|1",
                             "eventKeyboard|29|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|0|", "eventKeyboard|2019|0|", "eventKeyboard|2019|1|",
                        "eventKeyboard|2072|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdDc_027_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_002_C
 * Function: Multi_Input_func_interac_Three_SdDc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_003_C
 * Function: Multi_Input_func_interac_Three_SdDc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203274001", "29010203113001", "122102020101", "01010203274000",
                    "29010203113000"};
    ci.deviceMsg = {"2|3|", "1|17|", "2|8|", "2|3|",
                             "1|17|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventKeyboard|113|0", "eventPointer|15|0",
                             "eventPointer|274|0", "eventKeyboard|113|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventKeyboard|22|0|", "eventPointer|15|0|",
                        "eventPointer|4|0|", "eventKeyboard|22|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1112","OnNext"}}, {{"1113","OnBack"}}, {{""}}};
    ci.dispatcherList = {"", "|0|1|0,|1|0|0", "", "",
                         "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_004_C
 * Function: Multi_Input_func_interac_Three_SdDc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_005_C
 * Function: Multi_Input_func_interac_Three_SdDc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "21020203-35040", "4021020201-1", "01010203273000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|21|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_006_C
 * Function: Multi_Input_func_interac_Three_SdDc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203273001", "33020203-35040", "4921020201-1", "14010203273000"};
    ci.deviceMsg = {"2|9|", "2|18|", "2|24|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_007_C
 * Function: Multi_Input_func_interac_Three_SdDc_007_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_007_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19010203273001", "37020203-35040", "5021020201-1", "19010203273000"};
    ci.deviceMsg = {"2|11|", "2|20|", "2|25|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|-35|40", "eventPointer|-15|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|-35|40|", "eventPointer|-15|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{""}}, {{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_007_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_008_C
 * Function: Multi_Input_func_interac_Three_SdDc_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "21010203273001", "01010203274001", "01010203274000",
                    "21010203273000", "01010203272000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|3|", "2|3|",
                             "2|12|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|273|1", "eventPointer|274|1",
                             "eventPointer|274|0", "eventPointer|273|0", "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "/", "/", "/",
                             "/", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|2|1|", "eventPointer|4|1|",
                        "eventPointer|4|0|", "eventPointer|2|0|", "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{"1113","OnBack"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_008_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_009_C
 * Function: Multi_Input_func_interac_Three_SdDc_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_009_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_010_C
 * Function: Multi_Input_func_interac_Three_SdDc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_011_C
 * Function: Multi_Input_func_interac_Three_SdDc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_012_C
 * Function: Multi_Input_func_interac_Three_SdDc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08600203295001", "27630203000345", "27630203106001", "44600203300001",
                    "44600203300000", "27630203000445", "27630203106000", "08600203295000"};
    ci.deviceMsg = {"7|6|", "7|15|", "7|15|", "7|22|",
                             "7|22|", "7|15|", "7|15|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickKey|295|1", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickKey|300|1", "eventJoyStickKey|300|0", "eventJoyStickAxis",
                             "eventJoyStickAxis", "eventJoyStickKey|295|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2408|1|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventKeyboard|2413|1|", "eventKeyboard|2413|0|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|", "eventKeyboard|2408|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_013_C
 * Function: Multi_Input_func_interac_Three_SdDc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"26500203304001", "07500203307001", "075302040001-500", "26500203304000",
                    "07500203307000"};
    ci.deviceMsg = {"7|14|", "7|5|", "7|5|", "7|14|",
                             "7|5|"};
    ci.libinputExpectList = {"eventJoyStickKey|304|1", "eventJoyStickKey|307|1", "eventJoyStickAxis",
                             "eventJoyStickKey|304|0", "eventJoyStickKey|307|0"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/"};
    ci.expectL3Event = {"eventKeyboard|2301|1|", "eventKeyboard|2304|1|", "eventJoyStickAxis|",
                        "eventKeyboard|2301|0|", "eventKeyboard|2304|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Three_SdDc_014_C
 * Function: Multi_Input_func_interac_Three_SdDc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Three_SdDc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203109001", "28500203304001", "09500203307001", "09500203307000",
                    "28500203304000", "09010203109000"};
    ci.deviceMsg = {"1|7|", "1|16|", "1|7|", "1|7|",
                             "1|16|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|109|1", "eventKeyboard|304|0", "eventKeyboard|307|0",
                             "eventKeyboard|307|0", "eventKeyboard|304|-2", "eventKeyboard|109|-2"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|1|", "eventKeyboard|2301|0|", "eventKeyboard|2304|0|",
                        "eventKeyboard|2304|0|", "eventKeyboard|2301|-2|", "eventKeyboard|2069|-2|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Three_SdDc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_001_C
 * Function: Multi_Input_func_interac_Two_DdSc_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "1421020201-2"};
    ci.deviceMsg = {"2|3|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_001_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_002_C
 * Function: Multi_Input_func_interac_Two_DdSc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002", "192102020102"};
    ci.deviceMsg = {"2|3|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_003_C
 * Function: Multi_Input_func_interac_Two_DdSc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "XXXXXXXX(touchpad)"};
    ci.deviceMsg = {"2|3|", ""};
    ci.libinputExpectList = {"eventPointer|-30|0", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_004_C
 * Function: Multi_Input_func_interac_Two_DdSc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002", "122102020101(有问题)"};
    ci.deviceMsg = {"2|3|", "2|8|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_005_C
 * Function: Multi_Input_func_interac_Two_DdSc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "075302040001-500"};
    ci.deviceMsg = {"2|3|", "7|5|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_006_C
 * Function: Multi_Input_func_interac_Two_DdSc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002", "0863020300010456", "0863020300010556"};
    ci.deviceMsg = {"2|3|", "7|6|", "7|6|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_007_C
 * Function: Multi_Input_func_interac_Two_DdSc_007_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_007_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002", "192102020102"};
    ci.deviceMsg = {"2|9|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_007_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_008_C
 * Function: Multi_Input_func_interac_Two_DdSc_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2", "XXXXXXX(touchpad)"};
    ci.deviceMsg = {"2|9|", ""};
    ci.libinputExpectList = {"eventPointer|-30|0", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_008_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_009_C
 * Function: Multi_Input_func_interac_Two_DdSc_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002", "122102020101"};
    ci.deviceMsg = {"2|9|", "2|8|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_009_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_010_C
 * Function: Multi_Input_func_interac_Two_DdSc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2", "075302040001-500"};
    ci.deviceMsg = {"2|9|", "7|5|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_011_C
 * Function: Multi_Input_func_interac_Two_DdSc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002", "0863020300010456", "0863020300010556"};
    ci.deviceMsg = {"2|9|", "7|6|", "7|6|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_012_C
 * Function: Multi_Input_func_interac_Two_DdSc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "xxxxx(touchpad)"};
    ci.deviceMsg = {"2|11|", ""};
    ci.libinputExpectList = {"eventPointer|30|0", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_013_C
 * Function: Multi_Input_func_interac_Two_DdSc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "122102020101"};
    ci.deviceMsg = {"2|11|", "2|8|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_014_C
 * Function: Multi_Input_func_interac_Two_DdSc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2", "075302040001-500"};
    ci.deviceMsg = {"2|11|", "7|5|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_015_C
 * Function: Multi_Input_func_interac_Two_DdSc_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "0863020300010456", "0863020300010556"};
    ci.deviceMsg = {"2|11|", "7|6|", "7|6|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_015_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_016_C
 * Function: Multi_Input_func_interac_Two_DdSc_016_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_016_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxx(touchpad)", "122102020101(有问题)"};
    ci.deviceMsg = {"", "2|8|"};
    ci.libinputExpectList = {"", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{""}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_016_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_017_C
 * Function: Multi_Input_func_interac_Two_DdSc_017_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_017_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxxx(touchpad)", "122102020101"};
    ci.deviceMsg = {"", "2|8|"};
    ci.libinputExpectList = {"", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{""}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_017_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_018_C
 * Function: Multi_Input_func_interac_Two_DdSc_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"075302040000-500"};
    ci.deviceMsg = {"7|5|"};
    ci.libinputExpectList = {"eventJoyStickAxis"};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_018_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_019_C
 * Function: Multi_Input_func_interac_Two_DdSc_019_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_019_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxxxxxx(touchpad)", "0863020300000456"};
    ci.deviceMsg = {"", "7|6|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_019_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_020_C
 * Function: Multi_Input_func_interac_Two_DdSc_020_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_020_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"122102020101", "0753020400010500"};
    ci.deviceMsg = {"2|8|", "7|5|"};
    ci.libinputExpectList = {"eventPointer|15|0", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|15|0|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_020_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_021_C
 * Function: Multi_Input_func_interac_Two_DdSc_021_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_021_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1221020201-1", "086302040001-123", "086302040001-323"};
    ci.deviceMsg = {"2|8|", "7|6|", "7|6|"};
    ci.libinputExpectList = {"eventPointer|-15|0", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventPointer|-15|0|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_021_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_022_C
 * Function: Multi_Input_func_interac_Two_DdSc_022_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_022_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0753020400000800", "0863020400000345", "0863020400000445"};
    ci.deviceMsg = {"7|5|", "7|6|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_022_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_023_C
 * Function: Multi_Input_func_interac_Two_DdSc_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07510203016001", "08620203016001", "08620203016000", "07510203016000"};
    ci.deviceMsg = {"7|5|", "7|6|", "7|6|", "7|5|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_023_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_024_C
 * Function: Multi_Input_func_interac_Two_DdSc_024_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_024_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxxxxxxxx(缺少数据)", "08630203005127"};
    ci.deviceMsg = {"", "7|6|"};
    ci.libinputExpectList = {"", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_024_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_025_C
 * Function: Multi_Input_func_interac_Two_DdSc_025_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_025_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203131001", "09010203131001", "09010203131000", "03010203131000"};
    ci.deviceMsg = {"1|4|", "1|7|", "1|7|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|131|0", "eventKeyboard|131|0", "eventKeyboard|131|1",
                             "eventKeyboard|131|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2619|0|", "eventKeyboard|2619|0|", "eventKeyboard|2619|1|",
                        "eventKeyboard|2619|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_025_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_026_C
 * Function: Multi_Input_func_interac_Two_DdSc_026_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_026_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203115001", "10010203115001", "10010203115000", "09010203115000"};
    ci.deviceMsg = {"1|7|", "1|8|", "1|8|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|115|0", "eventKeyboard|115|0", "eventKeyboard|115|1",
                             "eventKeyboard|115|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|16|0|", "eventKeyboard|16|0|", "eventKeyboard|16|1|",
                        "eventKeyboard|16|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0", "|0|1|0,|1|0|0", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_026_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_027_C
 * Function: Multi_Input_func_interac_Two_DdSc_027_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_027_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"10010203029001", "10010203056001", "10010203049001", "03010203029001",
                    "03010203029000", "10010203029000", "10010203056000", "10010203049000"};
    ci.deviceMsg = {"1|8|", "1|8|", "1|8|", "1|4|",
                             "1|4|", "1|8|", "1|8|", "1|8|"};
    ci.libinputExpectList = {"eventKeyboard|29|1", "eventKeyboard|56|1", "eventKeyboard|49|0",
                             "eventKeyboard|29|0", "eventKeyboard|29|0", "eventKeyboard|29|0",
                             "eventKeyboard|56|1", "eventKeyboard|49|1"};
    ci.standardExpectList = {"/", "/", "/", "/",
                             "/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2072|1|", "eventKeyboard|2045|1|", "eventKeyboard|2030|0|",
                        "eventKeyboard|2072|0|", "eventKeyboard|2072|0|", "eventKeyboard|2072|0|",
                        "eventKeyboard|2045|1|", "eventKeyboard|2030|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{"4007","OnShowNotifiCation"}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_027_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_028_C
 * Function: Multi_Input_func_interac_Two_DdSc_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"（", "01010203273001", "（", "01010203273000"};
    ci.deviceMsg = {"", "2|3|", "", "2|3|"};
    ci.libinputExpectList = {"", "eventPointer|273|1", "",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|2|1|", "|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{""}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_028_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_029_C
 * Function: Multi_Input_func_interac_Two_DdSc_029_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_029_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"（", "01010203274001", "（", "01010203274000"};
    ci.deviceMsg = {"", "2|3|", "", "2|3|"};
    ci.libinputExpectList = {"", "eventPointer|274|1", "",
                             "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"|", "eventPointer|4|1|", "|",
                        "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_029_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_030_C
 * Function: Multi_Input_func_interac_Two_DdSc_030_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_030_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14010203272001", "19010203272001", "19010203272000", "14010203272000"};
    ci.deviceMsg = {"2|9|", "2|11|", "2|11|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_030_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_031_C
 * Function: Multi_Input_func_interac_Two_DdSc_031_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_031_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"12010203274001", "01010203274001", "12010203274000", "01010203274000"};
    ci.deviceMsg = {"2|8|", "2|3|", "2|8|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|274|1", "eventPointer|274|1", "eventPointer|274|0",
                             "eventPointer|274|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|4|1|", "eventPointer|4|1|", "eventPointer|4|0|",
                        "eventPointer|4|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1113","OnBack"}}, {{"1113","OnBack"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_031_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_032_C
 * Function: Multi_Input_func_interac_Two_DdSc_032_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_032_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203000-32", "142102020002"};
    ci.deviceMsg = {"2|3|", "2|9|"};
    ci.libinputExpectList = {"eventPointer|0|-32", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|0|-32|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{""}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_032_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_033_C
 * Function: Multi_Input_func_interac_Two_DdSc_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203032000", "19020203032000"};
    ci.deviceMsg = {"2|3|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|32|0", "eventPointer|32|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|32|0|", "eventPointer|32|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_033_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_034_C
 * Function: Multi_Input_func_interac_Two_DdSc_034_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_034_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203000-32", "XXXXXXXXXXXX(touchpad)"};
    ci.deviceMsg = {"2|3|", ""};
    ci.libinputExpectList = {"eventPointer|0|-32", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|0|-32|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_034_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_035_C
 * Function: Multi_Input_func_interac_Two_DdSc_035_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_035_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142100020002", "19020203000032"};
    ci.deviceMsg = {"2|9|", "2|11|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|0|32"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|0|32|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_035_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_036_C
 * Function: Multi_Input_func_interac_Two_DdSc_036_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_036_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002", "XXXXXXXXXXXX（touchpad）"};
    ci.deviceMsg = {"2|9|", ""};
    ci.libinputExpectList = {"eventPointer|30|0", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_036_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_DdSc_037_C
 * Function: Multi_Input_func_interac_Two_DdSc_037_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_DdSc_037_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"19020203000-32", "XXXXXXXXXXXX(touchpad)"};
    ci.deviceMsg = {"2|11|", ""};
    ci.libinputExpectList = {"eventPointer|0|-32", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|0|-32|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_DdSc_037_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_001_C
 * Function: Multi_Input_func_interac_Two_SdSc_001_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_001_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0121020201-2", "2121020201-2"};
    ci.deviceMsg = {"2|3|", "2|12|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_001_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_002_C
 * Function: Multi_Input_func_interac_Two_SdSc_002_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_002_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"012102020002", "212102020002"};
    ci.deviceMsg = {"2|3|", "2|12|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_002_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_003_C
 * Function: Multi_Input_func_interac_Two_SdSc_003_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_003_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"142102020002", "332102020002"};
    ci.deviceMsg = {"2|9|", "2|18|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_003_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_004_C
 * Function: Multi_Input_func_interac_Two_SdSc_004_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_004_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1421020201-2", "3321020201-2"};
    ci.deviceMsg = {"2|9|", "2|18|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_004_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_005_C
 * Function: Multi_Input_func_interac_Two_SdSc_005_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_005_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1921020201-2", "3721020201-2"};
    ci.deviceMsg = {"2|11|", "2|20|"};
    ci.libinputExpectList = {"eventPointer|-30|0", "eventPointer|-30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-30|0|", "eventPointer|-30|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_005_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_006_C
 * Function: Multi_Input_func_interac_Two_SdSc_006_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_006_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"192102020102", "372102020102"};
    ci.deviceMsg = {"2|11|", "2|20|"};
    ci.libinputExpectList = {"eventPointer|30|0", "eventPointer|30|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|30|0|", "eventPointer|30|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_006_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_007_C
 * Function: Multi_Input_func_interac_Two_SdSc_007_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_007_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxxxx(touchpad)", "xxxxx(touchpad)"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_007_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_008_C
 * Function: Multi_Input_func_interac_Two_SdSc_008_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_008_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"xxxxxxx(touchpad)", "xxxxxxx(touchpad)"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_008_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_009_C
 * Function: Multi_Input_func_interac_Two_SdSc_009_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_009_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1221020201-1", "2921020201-1"};
    ci.deviceMsg = {"2|8|", "1|17|"};
    ci.libinputExpectList = {"eventPointer|-15|0", "eventPointer|-15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-15|0|", "eventPointer|-15|0|"};
    ci.mixedkeyList = {{{"1111","OnPrevious"}}, {{"1111","OnPrevious"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_009_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_010_C
 * Function: Multi_Input_func_interac_Two_SdSc_010_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_010_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"122102020101", "292102020101"};
    ci.deviceMsg = {"2|8|", "1|17|"};
    ci.libinputExpectList = {"eventPointer|15|0", "eventPointer|15|0"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|15|0|", "eventPointer|15|0|"};
    ci.mixedkeyList = {{{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_010_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_011_C
 * Function: Multi_Input_func_interac_Two_SdSc_011_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_011_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_011_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_012_C
 * Function: Multi_Input_func_interac_Two_SdSc_012_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_012_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07510203016001", "26510203016001", "07510203016000", "26510203016000"};
    ci.deviceMsg = {"7|5|", "7|14|", "7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_012_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_013_C
 * Function: Multi_Input_func_interac_Two_SdSc_013_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_013_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"075302040001-500", "265302040001-500"};
    ci.deviceMsg = {"7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_013_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_014_C
 * Function: Multi_Input_func_interac_Two_SdSc_014_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_014_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"0754020400020200", "2654020400020200"};
    ci.deviceMsg = {"7|5|", "7|14|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_014_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_015_C
 * Function: Multi_Input_func_interac_Two_SdSc_015_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_015_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08630203001100", "08630203001254", "27630203001100", "27630203001254"};
    ci.deviceMsg = {"7|6|", "7|6|", "7|15|", "7|15|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_015_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_016_C
 * Function: Multi_Input_func_interac_Two_SdSc_016_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_016_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08620203016001", "27620203016001", "08620203016000", "27620203016000"};
    ci.deviceMsg = {"7|6|", "7|15|", "7|6|", "7|15|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_016_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_017_C
 * Function: Multi_Input_func_interac_Two_SdSc_017_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_017_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"086302040000-234", "086302040000-334", "276302040000-234", "276302040000-334"};
    ci.deviceMsg = {"7|6|", "7|6|", "7|15|", "7|15|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis", "eventJoyStickAxis",
                             "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|", "eventJoyStickAxis|",
                        "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_017_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_018_C
 * Function: Multi_Input_func_interac_Two_SdSc_018_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_018_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08630203005127", "27630203005127"};
    ci.deviceMsg = {"7|6|", "7|15|"};
    ci.libinputExpectList = {"eventJoyStickAxis", "eventJoyStickAxis"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventJoyStickAxis|", "eventJoyStickAxis|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_018_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_022_C
 * Function: Multi_Input_func_interac_Two_SdSc_022_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_022_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203002001", "22010203002001", "22010203002000", "03010203002000"};
    ci.deviceMsg = {"1|4|", "1|13|", "1|13|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|2|0", "eventKeyboard|2|0", "eventKeyboard|2|1",
                             "eventKeyboard|2|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2001|0|", "eventKeyboard|2001|0|", "eventKeyboard|2001|1|",
                        "eventKeyboard|2001|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_022_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_023_C
 * Function: Multi_Input_func_interac_Two_SdSc_023_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_023_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"03010203109001", "22010203109001", "22010203109000", "03010203109000"};
    ci.deviceMsg = {"1|4|", "1|13|", "1|13|", "1|4|"};
    ci.libinputExpectList = {"eventKeyboard|109|0", "eventKeyboard|109|0", "eventKeyboard|109|1",
                             "eventKeyboard|109|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2069|0|", "eventKeyboard|2069|0|", "eventKeyboard|2069|1|",
                        "eventKeyboard|2069|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{"1112","OnNext"}}, {{"1112","OnNext"}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_023_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_024_C
 * Function: Multi_Input_func_interac_Two_SdSc_024_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_024_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203389001", "28010203389001", "28010203389000", "09010203389000"};
    ci.deviceMsg = {"1|7|", "1|16|", "1|16|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|389|0", "eventKeyboard|389|0", "eventKeyboard|389|1",
                             "eventKeyboard|389|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2681|0|", "eventKeyboard|2681|0|", "eventKeyboard|2681|1|",
                        "eventKeyboard|2681|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_024_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_025_C
 * Function: Multi_Input_func_interac_Two_SdSc_025_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_025_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"09010203402001", "28010203402001", "28010203402000", "09010203402000"};
    ci.deviceMsg = {"1|7|", "1|16|", "1|16|", "1|7|"};
    ci.libinputExpectList = {"eventKeyboard|402|0", "eventKeyboard|402|0", "eventKeyboard|402|1",
                             "eventKeyboard|402|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2690|0|", "eventKeyboard|2690|0|", "eventKeyboard|2690|1|",
                        "eventKeyboard|2690|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_025_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_026_C
 * Function: Multi_Input_func_interac_Two_SdSc_026_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_026_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"10010203113001", "29010203113001", "29010203113000", "10010203113000"};
    ci.deviceMsg = {"1|8|", "1|17|", "1|17|", "1|8|"};
    ci.libinputExpectList = {"eventKeyboard|113|0", "eventKeyboard|113|0", "eventKeyboard|113|1",
                             "eventKeyboard|113|1"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|22|0|", "eventKeyboard|22|0|", "eventKeyboard|22|1|",
                        "eventKeyboard|22|1|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"|0|1|0,|1|0|0", "|0|1|0,|1|0|0", "", "|0|1|0,|1|0|0"};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_026_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_027_C
 * Function: Multi_Input_func_interac_Two_SdSc_027_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_027_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {""};
    ci.deviceMsg = {""};
    ci.libinputExpectList = {""};
    ci.standardExpectList = {"/"};
    ci.expectL3Event = {"|"};
    ci.mixedkeyList = {{{""}}};
    ci.dispatcherList = {""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_027_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_028_C
 * Function: Multi_Input_func_interac_Two_SdSc_028_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_028_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"08010203288001", "27010203288001", "27010203288000", "08010203288000"};
    ci.deviceMsg = {"7|6|", "7|15|", "7|15|", "7|6|"};
    ci.libinputExpectList = {"eventJoyStickKey|288|1", "eventJoyStickKey|288|1", "eventJoyStickKey|288|0",
                             "eventJoyStickKey|288|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2401|1|", "eventKeyboard|2401|1|", "eventKeyboard|2401|0|",
                        "eventKeyboard|2401|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_028_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_029_C
 * Function: Multi_Input_func_interac_Two_SdSc_029_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_029_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"07500203308001", "26500203308001", "26500203308000", "07500203308000"};
    ci.deviceMsg = {"7|5|", "7|14|", "7|14|", "7|5|"};
    ci.libinputExpectList = {"eventJoyStickKey|308|1", "eventJoyStickKey|308|1", "eventJoyStickKey|308|0",
                             "eventJoyStickKey|308|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventKeyboard|2305|1|", "eventKeyboard|2305|1|", "eventKeyboard|2305|0|",
                        "eventKeyboard|2305|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_029_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_030_C
 * Function: Multi_Input_func_interac_Two_SdSc_030_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_030_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203272001", "21010203272001", "21010203272000", "01010203272000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|12|", "2|3|"};
    ci.libinputExpectList = {"eventPointer|272|1", "eventPointer|272|1", "eventPointer|272|0",
                             "eventPointer|272|0"};
    ci.standardExpectList = {"402|500|272|1|0|0", "402|500|272|1|0|0", "402|501|272|0|0|0", "402|501|272|0|0|0"};
    ci.expectL3Event = {"eventPointer|1|1|", "eventPointer|1|1|", "eventPointer|1|0|",
                        "eventPointer|1|0|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_030_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_031_C
 * Function: Multi_Input_func_interac_Two_SdSc_031_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_031_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01010203273001", "21010203273001", "01010203273000", "21010203273000"};
    ci.deviceMsg = {"2|3|", "2|12|", "2|3|", "2|12|"};
    ci.libinputExpectList = {"eventPointer|273|1", "eventPointer|273|1", "eventPointer|273|0",
                             "eventPointer|273|0"};
    ci.standardExpectList = {"/", "/", "/", "/"};
    ci.expectL3Event = {"eventPointer|2|1|", "eventPointer|2|1|", "eventPointer|2|0|",
                        "eventPointer|2|0|"};
    ci.mixedkeyList = {{{"1101","OnShowMenu"}}, {{"1101","OnShowMenu"}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_031_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_032_C
 * Function: Multi_Input_func_interac_Two_SdSc_032_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_032_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"XXX(PEN)", "XXX(PEN)"};
    ci.deviceMsg = {"", ""};
    ci.libinputExpectList = {"", ""};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_032_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_033_C
 * Function: Multi_Input_func_interac_Two_SdSc_033_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_033_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"01020203-35040", "21020203-40035"};
    ci.deviceMsg = {"2|3|", "2|12|"};
    ci.libinputExpectList = {"eventPointer|-35|40", "eventPointer|-40|35"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|-35|40|", "eventPointer|-40|35|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_033_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_034_C
 * Function: Multi_Input_func_interac_Two_SdSc_034_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_034_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"14020203015030", "33020203045060"};
    ci.deviceMsg = {"2|9|", "2|18|"};
    ci.libinputExpectList = {"eventPointer|15|30", "eventPointer|45|60"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|15|30|", "eventPointer|45|60|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_034_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_035_C
 * Function: Multi_Input_func_interac_Two_SdSc_035_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_035_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"1902020335040", "3702020335040"};
    ci.deviceMsg = {"2|11|", "2|20|"};
    ci.libinputExpectList = {"eventPointer|350|40", "eventPointer|350|40"};
    ci.standardExpectList = {"/", "/"};
    ci.expectL3Event = {"eventPointer|350|40|", "eventPointer|350|40|"};
    ci.mixedkeyList = {{{""}}, {{""}}};
    ci.dispatcherList = {"", ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_035_C");
}

/*
 * Feature: Multi_Input_func_interac_Two_SdSc_036_C
 * Function: Multi_Input_func_interac_Two_SdSc_036_C
 * SubFunction: NA
 * FunctionPoints: NA
 * EnvConditions: NA
 * CaseDescription: set log print level
 */
AUTO_TEST_FUNC(SingleWindowRegisteredTest, Multi_Input_func_interac_Two_SdSc_036_C, TestSize.Level0)
{
    struct CaseInfo ci = {{""}, {""}, {""}, {""}, {""}, {{{""}}}, {""}};
    ci.eventList = {"XXXXXXXX（touchpad）", "XXXXXXXX（touchpad）", "", "",
                    "", "", "", "",
                    ""};
    ci.deviceMsg = {"", "", "", "",
                             "", "", "", "",
                             ""};
    ci.libinputExpectList = {"", "", "",
                             "", "", "",
                             "", "", ""};
    ci.standardExpectList = {"/", "/", "", "",
                             "", "", "", "",
                             ""};
    ci.expectL3Event = {"|", "|", "|",
                        "|", "|", "|",
                        "|", "|", "|"};
    ci.mixedkeyList = {{{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}, {{""}}};
    ci.dispatcherList = {"", "", "", "",
                         "", "", "", "",
                         ""};
    AutoTestCommon(ci, "Multi_Input_func_interac_Two_SdSc_036_C");
}
}