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

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

// =================================test GetAddressesByName start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0100
 * @tc.name   Set host is "www.baidu.com" test GetAddressesByName to ssee the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0100, Function | MediumTest | Level3)
{
    std::string host = "www.baidu.com";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0200
 * @tc.name    Set host is "www.taobao.com" test GetAddressesByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0200, Function | MediumTest | Level3)
{
    std::string host = "www.taobao.com";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0300
 * @tc.name    Set host is "www.csdn.net" test GetAddressesByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.csdn.net";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0400
 * @tc.name    Set host is null test GetAddressesByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0400, Function | MediumTest | Level3)
{
    std::string host = " ";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0500
 * @tc.name    Set host is "www.csdn.net" test GetAddressesByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0500, Function | MediumTest | Level3)
{
    std::string host = "666";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0600
 * @tc.name    Set host is "www.csdn.net" test GetAddressesByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0600, Function | MediumTest | Level3)
{
    std::string host = "AAA";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0100
 * @tc.name    Set host is "www.baidu.com" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0100, Function | MediumTest | Level3)
{
    std::string host = "www.baidu.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0200
 * @tc.name    Set host is "www.taobao.com" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0200, Function | MediumTest | Level3)
{
    std::string host = "www.taobao.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0300
 * @tc.name    Set host is "www.csdn.net" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.csdn.net";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0400
 * @tc.name    Set host is "" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0400, Function | MediumTest | Level3)
{
    std::string host = "";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0500
 * @tc.name    Set host is "666" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0500, Function | MediumTest | Level3)
{
    std::string host = "666";
    INetAddr addr;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressByName(host, addr);
    std::cout<<"result="<<result<<std::endl;
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0600
 * @tc.name    Set host is "AAA" test GetAddressByName to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0600, Function | MediumTest | Level3)
{
    std::string host = "AAA";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->GetAddressesByName(host, addrList);
    ASSERT_FALSE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0100
 * @tc.name    Set socket_fd is 1 test BindSocket to see the return value. returned with 0
 * @tc.desc   Function test
 */

HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0100, Function | MediumTest | Level3)
{
    int32_t socket_fd = FD_ID_1;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0200
 * @tc.name    Set socket_fd is 2 test BindSocket to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0200, Function | MediumTest | Level3)
{
    int32_t socket_fd = FD_ID_2;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0300
 * @tc.name    Set socket_fd is 100 test BindSocket to see the return value. returned with 0
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0300, Function | MediumTest | Level3)
{
    int32_t socket_fd = FD_ID_100;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0400
 * @tc.name    Set socket_fd is 0 test BindSocket to see the return value. returned with 0
 * @tc.desc   Function test
 */

HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0400, Function | MediumTest | Level3)
{
    int32_t socket_fd = FD_ID_100;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->BindSocket(socket_fd);
    ASSERT_TRUE(result == 0);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0500
 * @tc.name    Set socket_fd is -1 test BindSocket to see the return value. returned with 0
 * @tc.desc   Function test
 */

HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0500, Function | MediumTest | Level3)
{
    int32_t socket_fd = -FD_ID_1;
    uint32_t netId = NETID_100;
    auto handle = DelayedSingleton<NetHandle>::GetInstance();
    handle->SetNetId(netId);
    int32_t result = handle->BindSocket(socket_fd);
    ASSERT_FALSE(result == 0);
}
}
}