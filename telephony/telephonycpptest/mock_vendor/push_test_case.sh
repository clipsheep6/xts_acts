#!/bin/bash

# Copyright (C) 2021 Huawei Device Co., Ltd.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
cd ../../../../../../
OpenHarmony_Standard_System=$(pwd)
echo ${OpenHarmony_Standard_System}
hdc shell mkdir /data/telephonycpptest
hdc shell rm /data/telephonycpptest/* -rf
for file in `ls ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases|grep -vE "\.json|\.list|\.hap"`
do
    sleep 0.3
    hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases/${file} /data/telephonycpptest/${file}
    hdc shell chmod +x /data/telephonycpptest/${file}
done


