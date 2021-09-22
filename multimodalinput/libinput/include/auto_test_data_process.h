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
 * @version 1.0
 */
#ifndef OHOS_AUTO_TEST_DATA_PROCESS_H
#define OHOS_AUTO_TEST_DATA_PROCESS_H


#ifdef OHOS_AUTO_TEST_FRAME
#include <iostream>
#include <vector>
#include <regex>
#include "libmmi_util.h"
#include "auto_test_multimodal.h"
#include "c_singleton.h"

struct ClientList {
    int32_t fd;
    int32_t surfaceId;
    int32_t abilityId;
};
namespace OHOS {
    namespace MMI {
        struct Libinput {
            std::string eventType;
            uint32_t keyCode;
            int32_t keyState;
            int32_t rawX;
            int32_t rawY;
            int32_t absoluteX;
            int32_t absoluteY;
        };

        struct Mapping {
            int32_t eventType;
        };

        struct Standard {
            int32_t reRventType;
            int32_t curRventType;
            uint32_t key;
            int32_t State;
            int32_t rawX;
            int32_t rawY;
            int32_t absoluteX;
            int32_t absoluteY;
        };

        struct ManagePkt {
            int32_t WMS;
            int32_t CALL_AMS;
            int32_t dis_System;
            int32_t dis_Client;
            int32_t dis_Camrea;
            int32_t sizeOfAppManager;
            std::vector<int32_t> window_List;
            std::vector<struct ClientList> appManage;
        };

        struct Dispatcher {
            std::string event_Type;
            int32_t source_Type;
            int32_t slot;
            int32_t L3key;
            int32_t state;
            int32_t rawX;
            int32_t rawY;
            int32_t mixedKey;
            int32_t fd;
            int32_t surfaceId;
            int32_t abilityId;
            int32_t absoluteX;
            int32_t absoluteY;
            std::vector<float> axisValueList;
            std::string deviceType;
            std::string deviceId;
        };

        struct Client_Pkt {
            std::string event_Type;
            int32_t key;
            int32_t state;
            int32_t rawX;
            int32_t rawY;
            std::string onFun;
            int32_t fd;
            int32_t surfaceId;
            int32_t abilityId;
            int32_t absoluteX;
            int32_t absoluteY;
            std::string deviceType;
            std::string deviceId;
            int32_t source_Type;
            int32_t slot;
        };
        class AutoTestDataProcess {
        public:
            AutoTestDataProcess();
            virtual ~AutoTestDataProcess();

            void LibinputPktDataProcess(const AutoTestLibinputPkt& libinputPkt);
            void MappingPktDataProcess(int32_t sourceType);
            void StandardPktDataProcess(const AutoTestStandardPkt& standardPkt);
            void ManagePktDataProcess(const AutoTestManagePkt& managePkt,
                std::vector<int32_t>& windowList, std::vector<AutoTestClientListPkt>& clientList);
            void DispatcherPktDataProcess(const AutoTestDispatcherPkt& dispatcherPkt, std::vector<float> standardValue);
            void ClientPktDataProcess(const AutoTestClientPkt& clientPkt);
            void ClientListPktDataProcess(std::vector<AutoTestClientListPkt>& clientListPkt);
            void KeyTypePktDataProcess(const AutoTestKeyTypePkt& keyTypePkt);
            std::vector<struct ClientList> GetClientList();
            std::string GetLibinputValue();
            std::string GetmappingResult();
            std::string GetStandardResult();
            std::string GetActualServerResult();
            std::string GetActualClientResult();
            std::string GetActualServerResult1();
            std::string GetActualClientResult1();
            std::string GetDispatcherStr();
            std::vector<float> GetAxisStrList();
            std::string MixedKeyServer();
            std::string MixedKeyClient();
            std::string GetInputValue(const std::string &event_type, const std::string &l3Key, const std::string &state,
                                      const std::string &rawX, const std::string &rawY);
            std::string GetInputValue1(const std::string &event_type, const std::string &l3Key, const std::string &state,
                                      const std::string &rawX, const std::string &rawY,
                                      const std::string &source_Type, const std::string &slot);
            void ModifyVariable(std::string &eventType, std::string &l3key, std::string &state, std::string &rawX,
                                std::string &rawY);
            void ModifyVariable1(std::string &eventType, std::string &l3key, std::string &state, std::string &rawX,
                                std::string &rawY, std::string &source_Type, std::string &slot);
            void ClearAll();
        protected:
        private:
            std::vector<struct ClientList> clientListValue;
            struct Libinput libinputValue;
            struct Mapping mapping = {};
            struct Standard standardValue = {};
            struct ManagePkt manageValue = {};
            std::vector<struct Dispatcher> dispatcherList;
            std::vector<struct Client_Pkt> clientPktList;
            std::vector<std::string> mixedKeyServer;
            std::vector<std::string> mixedKeyClient;
            std::vector<float> axisValueList;
            std::string deviceType;
            std::string deviceId;
        };
    }
}

// �����ӿ�
#define AUTOTEST_DATAPROCESS OHOS::MMI::CSingleton<OHOS::MMI::AutoTestDataProcess>::GetInstance()
#endif
#endif