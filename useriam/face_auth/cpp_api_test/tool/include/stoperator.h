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
#ifndef OHOS_FACE_AUTH_SYSTEM_TEST_STOPERATOR_H
#define OHOS_FACE_AUTH_SYSTEM_TEST_STOPERATOR_H

#include <cstring>
#include <string>
#include <vector>

namespace OHOS {
namespace STtools {
using std::string;
class StOperator {
public:
    StOperator();
    StOperator(const string &type, const string &bundle, const string &ability, const string &operatorName = "",
        const string &message = "r");
    ~StOperator();
    static int GetCountChild();
    string GetAbilityType();
    StOperator &SetAbilityType(const string &type);
    string GetBundleName();
    StOperator &SetBundleName(const string &bundleName);
    string GetAbilityName();
    StOperator &SetAbilityName(const string &abilityName);
    string GetOperatorName();
    StOperator &SetOperatorName(const string &operatorName);
    string GetMessage();
    StOperator &SetMessage(const string &message);
    StOperator &AddChildOperator(std::shared_ptr<StOperator> childOperator);
    std::vector<std::shared_ptr<StOperator>> GetChildOperator();

private:
    std::vector<std::shared_ptr<StOperator>> gchildOperator;
    std::shared_ptr<StOperator> gparentOperator;
    string gabilityType;
    string gbundleName;
    string gabilityName;
    string goperatorName; // data ability
    string gmessage;
    /* data */
    static int countChild;
};
} // namespace STtools
} // namespace OHOS

#endif // OHOS_FACE_AUTH_SYSTEM_TEST_STOPERATOR_H