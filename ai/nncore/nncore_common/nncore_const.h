/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
#ifndef NNCORE_CONST_H
#define NNCORE_CONST_H

#include <string>

namespace OHOS::NeuralNetworkCore{

const int MODEL_SIZE = 100;
const int ONE = 1;
const double ZEROPOINTTWO = 0.2;
const size_t ZERO = 0;
const int FIVE = 5;
const std::string CACHE_DIR = "./cache";
const std::string CACHE_PATH = CACHE_DIR + "/0.nncache";
const std::string CACHE_INFO_PATH = CACHE_DIR + "/cache_info.nncache";
const std::string NONEDIR = "./undir";
const std::string NONEFILE = CACHE_DIR + "/9.nncache";
const std::string SUPPORTMODELPATH = "modelPath";
const std::string NOSUPPORTMODELPATH = "noModelPath";
const int32_t ELEMENT_COUNT = 4;
}
#endif // NNCORE_CONST_H