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
#ifndef IMPL_NAPITEST_H
#define IMPL_NAPITEST_H

#include <cstring>
#include <string>
#include <memory>
#include <vector>
#include <math.h>

using NUMBER_TYPE_1 = uint32_t;
using NUMBER_TYPE_2 = uint32_t;
using NUMBER_TYPE_3 = uint32_t;
using NUMBER_TYPE_4 = uint32_t;
using NUMBER_TYPE_5 = uint32_t;
using NUMBER_TYPE_6 = uint32_t;
using NUMBER_TYPE_7 = uint32_t;
using NUMBER_TYPE_8 = uint32_t;


namespace napitest {
class Human {
public:
    std::string name;
    NUMBER_TYPE_1 age;
};
class TestClass1 {
public:
    Human ahuman;
    NUMBER_TYPE_2 num1;
    std::string str1;
    std::vector<NUMBER_TYPE_3> nums;
    std::vector<std::string> strs;
    std::vector<Human> mans;
bool if_direct(std::string &v1, std::string &out);
bool if_callback(std::string &v1, std::string &out);
bool if_async(std::string &v1, std::string &out);
};
bool fun2(std::string &v2, std::vector<NUMBER_TYPE_4> &numcc, Human &mancc, std::vector<Human> &out);
bool fun3(std::string &v2, std::string &out);
bool fun4(std::string &v2, std::string &out);namespace Space3 {
class TestClass2 {
public:
    NUMBER_TYPE_5 haha;
};
bool fun3(std::string &v3, std::string &out);namespace Space4 {
class TestClass3 {
public:
    NUMBER_TYPE_6 hoho;
bool add(std::vector<NUMBER_TYPE_7> &v1, NUMBER_TYPE_8 &out);
};
bool fun3(std::string &v3, std::string &out);}}}

#endif // IMPL_NAPITEST_H
