/*
* Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd. 
* Licensed under the Apache License, Version 2.0 (the "License"); 
* you may not use this file except in compliance with the License. 
* You may obtain a copy of the License at 
*
* http://www.apache.org/licenses/LICENSE-2.0 
*
* Unless required by applicable law or agreed to in writing, software 
* distributed under the License is distributed on an "AS IS" BASIS, 
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
* See the License for the specific language governing permissions and 
* limitations under the License. 
*/
#include "napitest.h"

namespace napitest {
bool TestClass1::if_direct(std::string &v1, std::string &out) {
    return true;
}

bool TestClass1::if_callback(std::string &v1, std::string &out) {
    return true;
}

bool TestClass1::if_async(std::string &v1, std::string &out) {
    return true;
}

bool fun2(std::string &v2, std::vector<NUMBER_TYPE_4> &numcc, Human &mancc, std::vector<Human> &out) {
    return true;
}

bool fun3(std::string &v2, std::string &out) {
    return true;
}

bool fun4(std::string &v2, std::string &out) {
    return true;
}
namespace Space3 {
bool fun3(std::string &v3, std::string &out) {
    return true;
}
namespace Space4 {
bool TestClass3::add(std::vector<NUMBER_TYPE_7> &v1, NUMBER_TYPE_8 &out) {
    return true;
}

bool fun3(std::string &v3, std::string &out) {
    return true;
}
}}}
