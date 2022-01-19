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

#include "network_manager_getaddressbyname_test.h"
#include <iostream>
#include "net_conn_client.h"
#include "singleton.h"
#include "net_specifier.h"
#include "net_conn_constants.h"
#include "net_conn_types.h"
#include "net_mgr_log_wrapper.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

// NetHandler handler;



// =================================test GetAddressesByName start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0100
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0100, Function | MediumTest | Level3)
{
    std::string host = "www.baidu.com";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    // sptr<NetHandler> handler = std::make_unique<NetHandler>(netId).release();
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    
    // int32_t result = handler->BindSocket(1);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0200
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0200, Function | MediumTest | Level3)
{
    std::string host = "www.taobao.com";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0300
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.csdn.net";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0400
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0400, Function | MediumTest | Level3)
{
    std::string host = "";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0500
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0500, Function | MediumTest | Level3)
{
    std::string host = "666";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0600
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0600, Function | MediumTest | Level3)
{
    std::string host = "AAA";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0100
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0100, Function | MediumTest | Level3)
{
    std::string host = "www.baidu.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0200
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0200, Function | MediumTest | Level3)
{
    std::string host = "www.taobao.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0300
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.csdn.net";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0400
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0400, Function | MediumTest | Level3)
{
    std::string host = "";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0500
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0500, Function | MediumTest | Level3)
{
    std::string host = "666";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0600
 * @tc.name
 * @tc.desc   Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0600, Function | MediumTest | Level3)
{
    std::string host = "AAA";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0100
 * @tc.name
 * @tc.desc   Function test
 */

HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0100, Function | MediumTest | Level3)
{
    int32_t socket_fd = 1;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0200
 * @tc.name
 * @tc.desc   Function test
 */

HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0200, Function | MediumTest | Level3)
{
    int32_t socket_fd = 2;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0300
 * @tc.name
 * @tc.desc   Function test
 */

HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0300, Function | MediumTest | Level3)
{
    int32_t socket_fd = 100;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0400
 * @tc.name
 * @tc.desc   Function test
 */

HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0400, Function | MediumTest | Level3)
{
    int32_t socket_fd = 0;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0500
 * @tc.name
 * @tc.desc   Function test
 */

HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0500, Function | MediumTest | Level3)
{
    int32_t socket_fd = -1;
    uint32_t netId = NETID_100;
    auto handler = DelayedSingleton<NetHandle>::GetInstance();
    handler->SetNetId(netId);
    int32_t result = handler->BindSocket(socket_fd);
    ASSERT_FALSE(result == 0);
}


}
}