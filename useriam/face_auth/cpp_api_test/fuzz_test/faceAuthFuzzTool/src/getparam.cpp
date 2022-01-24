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

#include <cfloat>
#include <chrono>
#include <climits>
#include <fcntl.h>
#include <functional>
#include <fstream>
#include <iostream>
#include <random>
#include <securec.h>
#include <unistd.h>
#include "getparam.h"
using std::string;

namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
bool GetBoolParam()
{
    bool param = false;
    int halfNum = 2;
    if (GetIntParam() % halfNum == 0) {
        param = true;
    } else {
        param = false;
    }
    std::cout << "Bool param is: " << param << std::endl;
    return param;
}

size_t GenRandom(size_t min, size_t max)
{
    std::random_device rd;
    static std::uniform_int_distribution<size_t> u(min, max);
    static std::default_random_engine e(rd());
    size_t param = u(e);
    return param;
}

int8_t GetS8Param()
{
    std::random_device rd;
    static std::uniform_int_distribution<int8_t> u(INT8_MIN, INT8_MAX);
    static std::default_random_engine e(rd());
    int8_t param = u(e);
    std::cout << "Int8_t param is: " << param << std::endl;
    return param;
}
int16_t GetS16Param()
{
    std::random_device rd;
    static std::uniform_int_distribution<int16_t> u(INT16_MIN, INT16_MAX);
    static std::default_random_engine e(rd());
    int16_t param = u(e);
    std::cout << "Int16_t param is: " << param << std::endl;
    return param;
}
int32_t GetS32Param()
{
    std::random_device rd;
    static std::uniform_int_distribution<int32_t> u(INT32_MIN, INT32_MAX);
    static std::default_random_engine e(rd());
    int32_t param = u(e);
    std::cout << "Int32_t param is: " << param << std::endl;
    return param;
}

int64_t GetS64Param()
{
    std::random_device rd;
    static std::uniform_int_distribution<int64_t> u(INT64_MIN, INT64_MAX);
    static std::default_random_engine e(rd());
    int64_t param = u(e);
    std::cout << "Int64_t param is: " << param << std::endl;
    return param;
}

template <class T>
T GetUnsignParam()
{
    std::random_device rd;
    static std::uniform_int_distribution<T> u;
    static std::default_random_engine e(rd());
    T param = u(e);
    return param;
}

size_t GetSizeTParam()
{
    size_t param = GetUnsignParam<size_t>();
    return param;
}

uint8_t GetU8Param()
{
    uint8_t param = GetUnsignParam<uint8_t>();
    std::cout << "Uint8_t param is: " << param << std::endl;
    return param;
}

unsigned int GetUIntParam()
{
    unsigned int param = GetUnsignParam<unsigned int>();
    std::cout << "Unsigned int param is: " << param << std::endl;
    return param;
}

uint16_t GetU16Param()
{
    uint16_t param = GetUnsignParam<uint16_t>();
    std::cout << "Uint16_t param is: " << param << std::endl;
    return param;
}

uint32_t GetU32Param()
{
    uint32_t param = GetUnsignParam<uint32_t>();
    std::cout << "Uint32_t param is: " << param << std::endl;
    return param;
}

uint64_t GetU64Param()
{
    uint64_t param = GetUnsignParam<uint64_t>();
    std::cout << "Uint64_t param is: " << param << std::endl;
    return param;
}

short GetShortParam()
{
    std::random_device rd;
    static std::uniform_int_distribution<short> u(SHRT_MIN, SHRT_MAX);
    static std::default_random_engine e(rd());
    short param = u(e);
    std::cout << "Short param is: " << param << std::endl;
    return param;
}

long GetLongParam()
{
    std::random_device rd;
    static std::uniform_int_distribution<long> u(LONG_MIN, LONG_MAX);
    static std::default_random_engine e(rd());
    long param = u(e);
    std::cout << "Long param is: " << param << std::endl;
    return param;
}

int GetIntParam()
{
    std::random_device rd;
    static std::uniform_int_distribution<> u(INT_MIN, INT_MAX);
    static std::default_random_engine e(rd());
    int param = u(e);
    std::cout << "Int param is: " << param << std::endl;
    return param;
}

double GetDoubleParam()
{
    std::random_device rd;
    static std::uniform_real_distribution<double> u(DBL_MIN, DBL_MAX);
    static std::default_random_engine e(rd());
    double param = u(e);
    std::cout << "double param is: " << param << std::endl;
    return param;
}

float GetFloatParam()
{
    std::random_device rd;
    static std::uniform_real_distribution<float> u(FLT_MIN, FLT_MAX);
    static std::default_random_engine e(rd());
    float param = u(e);
    std::cout << "Float param is: " << param << std::endl;
    return param;
}

char GetCharParam()
{
    std::random_device rd;
    int num1 = -128;
    int num2 = 127;
    static std::uniform_int_distribution<> u(num1, num2);
    static std::default_random_engine e(rd());
    char param = u(e);
    return param;
}

char32_t GetChar32Param()
{
    std::random_device rd;
    static std::uniform_int_distribution<char32_t> u;
    static std::default_random_engine e(rd());
    char32_t param = u(e);
    return param;
}

string GetStringParam()
{
    string param = "";
    char ch = GetCharParam();
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        ch = GetCharParam();
        param += ch;
    }
    std::cout << "String param length is: " << param.length() << std::endl;
    std::cout << "String param is: " << param << std::endl;
    return param;
}

std::vector<uint8_t> GetUintParam()
{
    string param = "";
    char ch = GetCharParam();
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        ch = GetCharParam();
        param += ch;
    }
    std::vector<uint8_t> unChar(param.begin(), param.end());
    unChar.push_back('\0');
    std::cout << "String param length is: " << param.length() << std::endl;
    std::cout << "String param is: " << param << std::endl;
    return unChar;
}

template <class T>
std::vector<T> GetUnsignVectorParam()
{
    std::vector<T> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        T t = GetUnsignParam<T>();
        param.push_back(t);
    }
    std::cout << "Uint std::vector param length is: " << param.size() << std::endl;
    return param;
}

template <class T>
T GetClassParam()
{
    T param;
    return param;
}

std::vector<bool> GetBoolVectorParam()
{
    std::vector<bool> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int t = GetBoolParam();
        param.push_back(t);
    }
    std::cout << "Bool std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<short> GetShortVectorParam()
{
    std::vector<short> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        short t = GetShortParam();
        param.push_back(t);
    }
    std::cout << "Short std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<long> GetLongVectorParam()
{
    std::vector<long> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        long t = GetLongParam();
        param.push_back(t);
    }
    std::cout << "Long std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<int> GetIntVectorParam()
{
    std::vector<int> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int t = GetIntParam();
        param.push_back(t);
    }
    std::cout << "Int std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<float> GetFloatVectorParam()
{
    std::vector<float> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        float t = GetIntParam();
        param.push_back(t);
    }
    std::cout << "Float std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<double> GetDoubleVectorParam()
{
    std::vector<double> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        double t = GetIntParam();
        param.push_back(t);
    }
    std::cout << "Double std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<char> GetCharVectorParam()
{
    std::vector<char> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        char t = GetCharParam();
        param.push_back(t);
    }
    std::cout << "Char std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<char32_t> GetChar32VectorParam()
{
    std::vector<char32_t> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        char32_t t = GetChar32Param();
        param.push_back(t);
    }
    std::cout << "Char32_t std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<string> GetStringVectorParam()
{
    std::vector<string> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        string t = GetStringParam();
        param.push_back(t);
    }
    std::cout << "String std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<int8_t> GetS8VectorParam()
{
    std::vector<int8_t> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int8_t temp = GetS8Param();
        param.push_back(temp);
    }
    std::cout << "Int8_t std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<int16_t> GetS16VectorParam()
{
    std::vector<int16_t> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int16_t temp = GetS16Param();
        param.push_back(temp);
    }
    std::cout << "Int16_t std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<int32_t> GetS32VectorParam()
{
    std::vector<int32_t> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int32_t temp = GetS32Param();
        param.push_back(temp);
    }
    std::cout << "Int32_t std::vector param length is: " << param.size() << std::endl;
    return param;
}

std::vector<int64_t> GetS64VectorParam()
{
    std::vector<int64_t> param;
    int strNum = 255;
    size_t len = GenRandom(0, strNum);
    while (len--) {
        int64_t temp = GetS64Param();
        param.push_back(temp);
    }
    std::cout << "Int32_t std::vector param length is: " << param.size() << std::endl;
    return param;
}

void TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode, Bundle &bundle)
{}

void TestCallback::OnDeathRecipient()
{}

sptr<OnFaceAuth> GetOnRequestFaceAuthResultCallBack()
{
    OHOS::sptr<TestCallback> callback(new TestCallback());
    return callback;
}

AuthParam GetBiomerticAuthParam()
{
    AuthParam param;
    param.reqId = GetU64Param();
    param.flags = GetIntRandom(0, 1);
    param.previewId = GetS32Param();
    param.challenge = GetS64Param();
    param.faceId = GetS32Param();
    return param;
}

EnrollParam GetBiomerticEnrollParam()
{
    EnrollParam param;
    param.reqId = GetU64Param();
    param.previewId = GetS32Param();
    param.challenge = GetS64Param();
    param.faceId = GetS32Param();
    param.token = GetUintParam();
    return param;
}

RemoveParam GetBiomerticRemoveParam()
{
    RemoveParam param;
    param.reqId = GetS32Param();
    param.faceId = GetS32Param();
    return param;
}

int32_t GetIntRandom(int32_t min, int32_t max)
{
    std::random_device rd;
    static std::uniform_int_distribution<int32_t> u(min, max);
    static std::default_random_engine e(rd());
    int32_t param = u(e);
    return param;
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
