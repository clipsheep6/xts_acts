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

#include "mock_vendor.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <memory>
#include <securec.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>

#include "log.h"
#include "mock_vendor_common.h"

static const int numLen = 2;

int MockVendor::Init()
{
    mode_t mode = 0666;
    // 获得共享内存
    shmid_ = shmget(static_cast<key_t>(shmAdress_), buffSize_, mode);
    if (shmid_ == -1) {
        LOG("> shmget errno = %d\n", errno);
        return -1;
    }

    // 关联共享内存
    sendSt_ = (struct SharedMemorySt *)(shmat(shmid_, nullptr, 0));
    if (sendSt_ == nullptr) {
        LOG("> parent : error: shmat%dn", errno);
        return -1;
    }
    return 0;
}

MockVendor::~MockVendor(void)
{
    // 取消关联共享内存
    if (shmdt(sendSt_) == -1) {
        LOG("> shmdt errno = %d\n", errno);
    }
}

// 判断是否已经饱和
bool MockVendor::IsFull() const
{
    return sendSt_->full == 1;
}

// 设置数据已饱和
void MockVendor::SetFull() const
{
    sendSt_->full = 1;
}

void MockVendor::MockVendorSetReg(int domain, int reg)
{
    int num[numLen];
    num[0] = reg;
    num[1] = domain;
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), num, sizeof(int) * numLen) != 0) {
        return;
    }
    MockVendorSet(NETWORK_SEARCH_SET_REG_STATUS, nbuff_, sizeof(int) * numLen);
}

void MockVendor::MockVendorSetPlmnState(int state)
{
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), &state, sizeof(int)) != 0) {
        return;
    }
    MockVendorSet(NETWORK_SEARCH_SET_PLMN_STATE, nbuff_, sizeof(int));
}

void MockVendor::MockVendorSetRat(int rat)
{
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), &rat, sizeof(int)) != 0) {
        return;
    }
    MockVendorSet(NETWORK_SEARCH_SET_RAT, nbuff_, sizeof(int));
}

void MockVendor::MockVendorSetRawReg(int domain, int reg)
{
    int num[numLen];
    num[0] = reg;
    num[1] = domain;
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), num, sizeof(int) * numLen) != 0) {
        return;
    }
    MockVendorSet(NETWORK_SEARCH_SET_RAW_REG_STATUS, nbuff_, sizeof(int) * numLen);
}

void MockVendor::MockVendorSetTech(int domain, int tech)
{
    int num[numLen];
    num[0] = tech;
    num[1] = domain;
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), num, sizeof(int) * numLen) != 0) {
        return;
    }
    MockVendorSet(NETWORK_SEARCH_SET_RADIO_TECH, nbuff_, sizeof(int) * numLen);
}

void MockVendor::MockVendorSetCardType(int cardType)
{
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), &cardType, sizeof(int)) != 0) {
        return;
    }
    MockVendorSet(SIM_SET_CARD_TYPE, nbuff_, sizeof(int));
}

void MockVendor::MockDataActiveError(int errType)
{
    memset_s(nbuff_, BUFSIZ, 0, BUFSIZ);
    if (memcpy_s(nbuff_, sizeof(nbuff_), &errType, sizeof(int)) != 0) {
        return;
    }
    MockVendorSet(DATA_SET_ERR_TYPE, nbuff_, sizeof(int));
}

void MockVendor::MockLostDataConnect(void)
{
    MockVendorSet(DATA_REPORT_LOST_ACTIVE_EVENT, nullptr, 0);
}

int MockVendor::MockVendorSet(int id, const char *data, int dataLen) const
{
    // 自己设计的锁
    for (int i = 0; i < maxLoop1000_; i++) {
        if (!IsFull()) {
            break;
        } else if (IsFull() && i == maxLoop1000_ - 1) {
            LOG("> IsFull() == true, send %d fail\n", id);
            return -1;
        }
        usleep(sleepUs50000_);
    }

    // 赋值
    sendSt_->id = id;
    sendSt_->dataLen = dataLen;
    (void)memset_s(sendSt_->data, BUFSIZ, 0, BUFSIZ);
    if (data != nullptr && memcpy_s(sendSt_->data, BUFSIZ, data, dataLen) != 0) {
        LOGE("> copy data to sendSt fail !");
        return -1;
    }

    SetFull(); // 已满
    usleep(sleepUs100000_);
    return 0;
}

int MockVendor::MockVendorSetWithDelay(int id, const char *data, int dataLen) const
{
    // 自己设计的锁
    for (int i = 0; i < maxLoop1000_; i++) {
        if (!IsFull()) {
            break;
        } else if (IsFull() && i == maxLoop1000_ - 1) {
            LOG("> IsFull() == true, send %d fail\n", id);
            return -1;
        }
        usleep(sleepUs1000_);
    }

    // 赋值
    sendSt_->id = id;
    sendSt_->dataLen = dataLen;
    (void)memset_s(sendSt_->data, BUFSIZ, 0, BUFSIZ);
    if (data != nullptr && memcpy_s(sendSt_->data, BUFSIZ, data, dataLen) != 0) {
        LOGE("> copy data to sendSt fail !");
        return -1;
    }

    SetFull(); // 已满
    usleep(sleepUs100000_);
    return 0;
}