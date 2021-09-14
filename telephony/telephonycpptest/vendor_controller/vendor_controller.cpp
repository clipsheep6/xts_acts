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

#include "call_info_callback.h"
#include "call_manager_service_proxy.h"
#include "if_system_ability_manager.h"
#include "iservice_registry.h"
#include "log.h"
#include "mock_vendor.h"
#include "mock_vendor_common.h"
#include "system_ability_definition.h"
#include <cstdio>
#include <iostream>
#include <securec.h>

using namespace std;
using namespace OHOS;
using namespace OHOS::Telephony;
static sptr<ICallManagerService> g_callManagerServicePtr = nullptr;
static sptr<CallInfoCallback> g_callInfoCallBack = (std::make_unique<CallInfoCallback>()).release();
static int InitCallManagerService()
{
    if (g_callManagerServicePtr != nullptr) {
        LOG("Already get telephony base service\n");
        return -1;
    }
    sptr<ISystemAbilityManager> sm = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (sm == nullptr) {
        LOG("GetSystemAbilityManager null\n");
        return -1;
    }

    g_callManagerServicePtr =
        iface_cast<ICallManagerService>(sm->GetSystemAbility(TELEPHONY_CALL_MANAGER_SYS_ABILITY_ID));
    if (g_callManagerServicePtr == nullptr) {
        LOG("GetSystemAbility null\n");
        return -1;
    }
    g_callManagerServicePtr->RegisterCallBack(g_callInfoCallBack);
    return 0;
}
static void PrintMenu()
{
    cout << "======================" << endl;

    cout << "1.add encoming call" << endl;
    cout << "2.notify calllist" << endl;
    cout << "3.change longoprator" << endl;
    cout << "4.VIEW calllist" << endl;
    cout << "5.change pin" << endl;
    cout << "6.change puk" << endl;
    cout << "7.change sim state" << endl;
    cout << "8.init sim pin input times" << endl;
    cout << "9.ps romaing on" << endl;
    cout << "10.ps romaing off" << endl;
    cout << "11.cs romaing on" << endl;
    cout << "12.cs romaing off" << endl;
    cout << "13.cs set raw status (input: doman reg)" << endl;
    cout << "14.remove all call)" << endl;
    cout << "15.notify sim  state change)" << endl;

    cout << "======================" << endl;
}

int main()
{
    sptr<ICallAbilityCallback> callAbilityCallbackPtr_;
    InitCallManagerService();
    MockVendor mockVendor;
    char buff[BUFSIZ];
    int input = -1;
    if (mockVendor.Init() != 0) {
        cout << "Init faild" << endl;
        return -1;
    }
    int maxLoop = 50;
    int loop = 0;
    while (input != 0 && loop < maxLoop) {
        loop++;
        PrintMenu();
        cin >> input;
        cout << "input:" << input << endl;
        memset_s(buff, BUFSIZ, '\0', BUFSIZ);
        switch (input) {
            case 1:
                scanf("%s", buff);
                cout << buff << endl;
                mockVendor.MockVendorSet(CALL_ADD_COMING_CALL, buff, strlen(buff));
                break;
            case 2:
                mockVendor.MockVendorSet(CALL_LIST_CHANGE_NOTIFY, buff, strlen(buff));
                break;
            case 3:
                scanf("%s", buff);
                mockVendor.MockVendorSet(NETWORK_SEARCH_SET_LONG_OPERATOR, buff, strlen(buff));
                break;
            case 4:
                mockVendor.MockVendorSet(CALL_VIEW_CALL_INFO, buff, 0);
                break;
            case 5:
                scanf("%s", buff);
                mockVendor.MockVendorSet(SIM_SET_PIN, buff, strlen(buff));
                break;
            case 6:
                scanf("%s", buff);
                mockVendor.MockVendorSet(SIM_SET_PUK, buff, strlen(buff));
                break;
            case 7:
                scanf("%s", buff);
                mockVendor.MockVendorSet(SIM_SET_STATE, buff, strlen(buff));
                break;
            case 8:
                mockVendor.MockVendorSet(SIM_INIT, buff, 0);
                break;
            case 9:
                mockVendor.MockVendorSetReg(0, 5);
                break;
            case 10:
                mockVendor.MockVendorSetReg(0, 1);
                break;
            case 11:
                mockVendor.MockVendorSetReg(1, 5);
                break;
            case 12:
                mockVendor.MockVendorSetReg(1, 1);
                break;
            case 13:
                int m, n;
                scanf("%d %d", &m, &n);
                mockVendor.MockVendorSetRawReg(m, n);
                break;
            case 14:
                mockVendor.MockVendorSet(CALL_REMOVE_ALL_CALL, nullptr, 0);
                break;
            case 15:
                mockVendor.MockVendorSet(SIM_NOTIFY, nullptr, 0);
                break;
            default:
                cout << input << "not defined" << endl;
                break;
        }
    }
    cout << "process done" << endl;
    return 0;
}