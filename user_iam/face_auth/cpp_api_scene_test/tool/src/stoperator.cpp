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
#include "stoperator.h"

namespace OHOS {
namespace STtools {
using std::string;
int StOperator::countChild = 0;
StOperator::StOperator()
    : gparentOperator(nullptr), gabilityType("0"), gbundleName(""), gabilityName(""), goperatorName(""), gmessage("")
{
    gchildOperator.clear();
    StOperator::countChild++;
}

StOperator::StOperator(const string &type, const string &bundle, const string &ability, const string &operatorName,
    const string &message)
    : gparentOperator(nullptr),
      gabilityType(type),
      gbundleName(bundle),
      gabilityName(ability),
      goperatorName(operatorName),
      gmessage(message)
{
    gchildOperator.clear();
    StOperator::countChild++;
}

StOperator::~StOperator()
{
    gchildOperator.clear();
    StOperator::countChild--;
}

int StOperator::GetCountChild()
{
    return StOperator::countChild;
}

string StOperator::GetAbilityType()
{
    return gabilityType;
}

StOperator &StOperator::SetAbilityType(const string &type)
{
    gabilityType = type;
    return *this;
}

string StOperator::GetBundleName()
{
    return gbundleName;
}

StOperator &StOperator::SetBundleName(const string &bundleName)
{
    gbundleName = bundleName;
    return *this;
}

string StOperator::GetAbilityName()
{
    return gabilityName;
}

StOperator &StOperator::SetAbilityName(const string &abilityName)
{
    gabilityName = abilityName;
    return *this;
}

string StOperator::GetOperatorName()
{
    return goperatorName;
}

StOperator &StOperator::SetOperatorName(const string &operatorName)
{
    goperatorName = operatorName;
    return *this;
}

string StOperator::GetMessage()
{
    return gmessage;
}

StOperator &StOperator::SetMessage(const string &message)
{
    gmessage = message;
    return *this;
}

StOperator &StOperator::AddChildOperator(std::shared_ptr<StOperator> childOperator)
{
    if (childOperator == nullptr) {
        return *this;
    }
    childOperator->gparentOperator = std::make_shared<StOperator>(*this);
    gchildOperator.emplace_back(childOperator);
    return *this;
}

std::vector<std::shared_ptr<StOperator>> StOperator::GetChildOperator()
{
    return gchildOperator;
}
} // namespace STtools
} // namespace OHOS