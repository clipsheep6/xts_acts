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

#ifndef _NET_STAT_CALLBACK_TEST_H
#define  _NET_STAT_CALLBACK_TEST_H
#include "net_stats_callback_stub.h"

namespace OHOS {
namespace NetManagerStandard {

class NetStatsCallbackTest : public NetStatsCallbackStub {
public:
    NetStatsCallbackTest();
    virtual ~NetStatsCallbackTest() override;
    int32_t NetIfaceStatsChanged(const std::string &iface) override;
    int32_t NetUidStatsChanged(const std::string &iface, uint32_t uid) override;
};
}
}

#endif  // _NET_STAT_CALLBACK_TEST_H