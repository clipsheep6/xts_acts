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
HOME=`pwd`
OpenHarmony_Standard_System=`echo "${HOME}" | awk -F"test" '{print $1}'`
echo ${OpenHarmony_Standard_System}
file="telephonycpptest"
if [ "$1" != "" ]; then
    file=$1
fi
Target="/data/${file}"
hdc shell mkdir ${Target}
    hdc shell rm ${Target}/* -rf
    for file in `ls ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases|grep -vE "\.json|\.list|\.hap"`
    do
	sleep 0.3
        hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases/${file} ${Target}/${file}
        hdc shell chmod +x ${Target}/${file}
    done

echo " success transfer file to ${Target}"


