/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

#ifndef OHOS_MOCK_DATA_HANDLER_H
#define OHOS_MOCK_DATA_HANDLER_H

#include "mock_call.h"
#include "mock_data.h"
#include "mock_network.h"
#include "mock_sim.h"

void Dispatch(int id, const char *data, int dataLen);
void InvokeNetworkFunc(int id, const char *data, int dataLen);
void InvokeDataFunc(int id, const char *data, int dataLen);
void InvokeSimFunc(int id, const char *data, int dataLen);
void InvokeCallFunc(int id, const char *data, int dataLen);

#endif // OHOS_MOCK_DATA_HANDLER_H