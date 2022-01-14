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
#ifndef GET_PARAM_H
#define GET_PARAM_H
#include <memory>
#include <cstdint>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include "on_faceauth.h"
#include "on_faceauth_stub.h"
#include "surface.h"
#include "face_auth_defines.h"

namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
public:
    TestCallback() = default;
    virtual ~TestCallback() = default;

    void OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
        OHOS::UserIAM::FaceAuth::Bundle &bundle);
    void OnDeathRecipient();
};
class TestDumper;
bool GetBoolParam();
uint8_t GetU8Param();
unsigned int GetUIntParam();
uint16_t GetU16Param();
uint32_t GetU32Param();
uint64_t GetU64Param();
int8_t GetS8Param();
int16_t GetS16Param();
int32_t GetS32Param();
int64_t GetS64Param();
char32_t GetChar32Param();
short GetShortParam();
long GetLongParam();
int GetIntParam();
double GetDoubleParam();
float GetFloatParam();
char GetCharParam();
std::vector<uint8_t> GetUintParam();
std::string GetStringParam();
std::vector<bool> GetBoolVectorParam();
std::vector<short> GetShortVectorParam();
std::vector<long> GetLongVectorParam();
std::vector<int> GetIntVectorParam();
std::vector<float> GetFloatVectorParam();
std::vector<double> GetDoubleVectorParam();
std::vector<char> GetCharVectorParam();
std::vector<char32_t> GetChar32VectorParam();
std::vector<std::string> GetStringVectorParam();
template <class T>
std::vector<T> GetUnsignVectorParam();
std::vector<int8_t> GetS8VectorParam();
std::vector<int16_t> GetS16VectorParam();
std::vector<int32_t> GetS32VectorParam();
std::vector<int64_t> GetS64VectorParam();
AuthParam GetBiomerticAuthParam();
EnrollParam GetBiomerticEnrollParam();
RemoveParam GetBiomerticRemoveParam();
int32_t GetIntRandom(int32_t min, int32_t max);
sptr<OnFaceAuth> GetOnRequestFaceAuthResultCallBack();

class FaceAuthCameraBufferListener : public IBufferConsumerListener {
public:
    sptr<Surface> cameraBuffer_;

    void OnBufferAvailable() override
    {
        int32_t flushFence = 0;
        int64_t timestamp = 0;
        OHOS::Rect damage;
        OHOS::sptr<OHOS::SurfaceBuffer> buffer = nullptr;
        cameraBuffer_->AcquireBuffer(buffer, flushFence, timestamp, damage);
        if (buffer != nullptr) {
            cameraBuffer_->ReleaseBuffer(buffer, -1);
        } else {
        }
    }
};
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
#endif