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

#ifndef MOCK_VENDOR_H
#define MOCK_VENDOR_H
#include "mock_vendor_common.h"

class MockVendor {
public:
    MockVendor() = default;
    ~MockVendor();

public:
    int Init();
    bool IsFull() const;
    void SetFull() const;
    int MockVendorSet(int id, const char *data, int dataLen) const;
    int MockVendorSetWithDelay(int id, const char *data, int dataLen) const;
    void MockVendorSetReg(int domain, int reg);
    void MockVendorSetTech(int domain, int tech);
    void MockVendorSetRawReg(int domain, int reg);
    void MockVendorSetPlmnState(int state);
    void MockVendorSetRat(int rat);
    void MockVendorSetCardType(int cardType);
    void MockDataActiveError(int errType);
    void MockLostDataConnect(void);

private:
    char nbuff_[BUFSIZ] = {'\0'};
    int shmid_ = -1;
    struct SharedMemorySt *sendSt_ = nullptr;
    const int buffSize_ = 1024;
    const int shmAdress_ = 107077;
    const int maxLoop1000_ = 1000;
    const int sleepUs1000_ = 1000;
    const int sleepUs50000_ = 50000;
    const int sleepUs100000_ = 100000;
};

#endif // MOCK_VENDOR_IPC_H
