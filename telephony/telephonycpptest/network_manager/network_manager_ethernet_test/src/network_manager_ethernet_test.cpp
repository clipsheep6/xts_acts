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

#include <iostream>
#include "network_manager_test.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "ethernet_constants.h"
#include "static_configuration.h"
#include "inet_addr.h"

static const int ADDR_PREFIX_LENGTH_25 = 25;
const uint8_t FAMILY  = 2;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;


// =================================test GetAddressesByName start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAddressesByName_0100, Function | MediumTest | Level3)
{
    std::string server = "www.baidu.com";
    std::vector<struct INetAddr> addrInfo;
    int32_t resutl = DelayedSingleton<DnsResolverClient>::GetInstance()->GetAddressesByName(server, addrInfo);
    ASSERT_EQ(resutl, NETMANAGER_SUCCESS);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAddressesByName_0200, Function | MediumTest | Level3)
{
    std::string server = "456";
    std::vector<struct INetAddr> addrInfo;
    int32_t result = DelayedSingleton<DnsResolverClient>::GetInstance()->GetAddressesByName(server, addrInfo);
    printf("%s %d  %d\n", __func__, __LINE__, result);
    ASSERT_EQ(result, ETHERNET_ERROR);
}
// =================================test GetAddressesByName end===================================
// =================================test SetIfaceConfig start===================================


/*
 * @tc.number  Telephony_NetworkManager_SetIfaceConfig_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_SetIfaceConfig_0100, Function | MediumTest | Level3)
{
    std::string iface = "the0";

    sptr<InterfaceConfiguration> ic = std::make_unique<InterfaceConfiguration>().release();
    IPSetMode mode = STATIC;
    struct INetAddr ipAddr_ ;
    struct INetAddr route_;
    struct INetAddr gate_;
    struct INetAddr netMask_;
    struct INetAddr dns;
    ipAddr_.type_ = INET::IPV4;
    ipAddr_.family_ = FAMILY;
    ipAddr_.prefixlen_ = ADDR_PREFIX_LENGTH_25;
    ipAddr_.address_ = "172.17.4.56";
    ipAddr_.netMask_ = "255.255.0.0";
    ipAddr_.hostName_ = "";
    route_.type_ = INET::IPV4;
    route_.family_ = FAMILY;
    route_.prefixlen_ = ADDR_PREFIX_LENGTH_25;
    route_.address_ = "172.17.4.56";
    route_.netMask_ = "255.255.0.0";
    route_.hostName_ = "";
    gate_.type_ = INET::IPV4;
    gate_.family_ = FAMILY;
    gate_.prefixlen_ = ADDR_PREFIX_LENGTH_25;
    gate_.address_ = "172.17.4.56";
    gate_.netMask_ = "255.255.0.0";
    gate_.hostName_ = "";
    netMask_.type_ = INET::IPV4;
    netMask_.family_ = FAMILY;
    netMask_.prefixlen_ = ADDR_PREFIX_LENGTH_25;
    netMask_.address_ = "172.17.4.56";
    netMask_.netMask_ = "255.255.0.0";
    netMask_.hostName_ = "";
    dns.type_ = INET::IPV4;
    dns.family_ = FAMILY;
    dns.prefixlen_ = ADDR_PREFIX_LENGTH_25;
    dns.address_ = "8.8.8.8";
    dns.netMask_ = "255.255.0.0";
    dns.hostName_ = "";

    std::vector<INetAddr> dnsServers_(1, dns);
    std::string domain_;
    ic->mode_ = mode;
    ic->ipStatic_.ipAddr_ = ipAddr_;
    ic->ipStatic_.route_ = route_;
    ic->ipStatic_.gate_ = gate_;
    ic->ipStatic_.netMask_ = netMask_;
    ic->ipStatic_.dnsServers_ = dnsServers_;
    int32_t result = DelayedSingleton<EthernetClient>::GetInstance()->SetIfaceConfig(iface, ic);
    ASSERT_EQ(result, NETMANAGER_ERROR);
}

/*
 * @tc.number  Telephony_NetworkManager_SetIfaceConfig_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_SetIfaceConfig_0400, Function | MediumTest | Level3)
{
    std::string iface = "eth0";

    sptr<InterfaceConfiguration> ic = std::make_unique<InterfaceConfiguration>().release();
    IPSetMode mode = DHCP;
    ic->mode_ = static_cast<IPSetMode>(mode);
    int32_t result = DelayedSingleton<EthernetClient>::GetInstance()->SetIfaceConfig(iface, ic);
    ASSERT_EQ(result, NETMANAGER_SUCCESS);
}

// =================================test SetIfaceConfig end===================================

// =================================test GetIfaceConfig start===================================

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceConfig_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetIfaceConfig_0100, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    sptr<InterfaceConfiguration> ic =
        DelayedSingleton<EthernetClient>::GetInstance()->GetIfaceConfig(iface);
    ASSERT_NE(ic, nullptr);
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceConfig_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetIfaceConfig_0200, Function | MediumTest | Level3)
{
    std::string iface = "test";
    sptr<InterfaceConfiguration> ic =
        DelayedSingleton<EthernetClient>::GetInstance()->GetIfaceConfig(iface);
    ASSERT_EQ(ic, nullptr);
}

// =================================test GetIfaceConfig end===================================


// =================================test IsIfaceActive end===================================
/*
 * @tc.number  Telephony_NetworkManager_IsIfaceActive_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_IsIfaceActive_0100, Function | MediumTest | Level3)
{
    std::string iface = "eth0";
    int32_t result = DelayedSingleton<EthernetClient>::GetInstance()->IsIfaceActive(iface);
    ASSERT_TRUE(result == 1);
}

/*
 * @tc.number  Telephony_NetworkManager_IsIfaceActive_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_IsIfaceActive_0200, Function | MediumTest | Level3)
{
    std::string iface = "test";
    int32_t result =  DelayedSingleton<EthernetClient>::GetInstance()->IsIfaceActive(iface);
    ASSERT_EQ(result, NETMANAGER_ERROR);
}

// =================================test IsIfaceActive end===================================
// =================================test GetAllActiveIfaces end===================================

/*
 * @tc.number  Telephony_NetworkManager_GetAllActiveIfaces_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_GetAllActiveIfaces_0100, Function | MediumTest | Level3)
{
    std::vector<std::string> ifaces = DelayedSingleton<EthernetClient>::GetInstance()->GetAllActiveIfaces();
    std::string iface = "eth0";
    int ret = std::count(ifaces.begin(), ifaces.end(), iface);
    ASSERT_GT(ret, NETMANAGER_SUCCESS);
}
// =================================test GetAllActiveIfaces end===================================
}
}