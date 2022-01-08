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
#ifndef OHOS_MOCK_SIM_H
#define OHOS_MOCK_SIM_H
#include <stdbool.h>
#include "at_sim.h"

enum CardType {
    /** Icc card type: Unknow type Card. */
    UNKNOWN_CARD = -1,

    /** Icc card type: Single sim card type. */
    SINGLE_MODE_SIM_CARD = 10,

    /** Icc card type: Single usim card type. */
    SINGLE_MODE_USIM_CARD = 20,

    /** Icc card type: Single ruim card type. */
    SINGLE_MODE_RUIM_CARD = 30,

    /** Icc card type: Double card C+G. */
    DUAL_MODE_CG_CARD = 40,

    /** Icc card type: Internal Roaming Card (Dual Mode). */
    CT_NATIONAL_ROAMING_CARD = 41,

    /** Icc card type: China Unicom Dual Mode Card. */
    CU_DUAL_MODE_CARD = 42,

    /** Icc card type: LTE Card (Dual Mode). */
    DUAL_MODE_4G_LTE_CARD = 43,

    /** Icc card type: Double card U+G. */
    DUAL_MODE_UG_CARD = 50,

    /** IMS */
    CARD_MODE_IMS = 60
};

void InitSimMockData(void);
int SimSetLockStatus(const char *fac, int mode, const char *password);
int SimGetLockStatusByName(const char *name);
void SetSimPin(const char *data, int dataLen);
void SetSimPuk(const char *data, int dataLen);
void SetSimPin2(const char *data, int dataLen);
void SetSimPuk2(const char *data, int dataLen);
void SetSimState(const char *data, int dataLen);
void SetSimIccid(const char *data, int dataLen);
void SetSimCardType(const char *data, int dataLen);
void StorageSms(char **pdu);
void DeleteSms(int index);
void UpdateSms(int index, char **pdu);
bool IsPinFormatCorrect(const char *pin);
bool IsCmdExists(const char *cmd);
void ProcessFixSimCommand(const char *cmd, char **response);

#endif // OHOS_MOCK_SIM_H