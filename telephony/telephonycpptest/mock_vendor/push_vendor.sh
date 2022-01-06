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

hdc target mount
hdc shell rm -rf /data/mock_vendor
hdc shell mkdir /data/mock_vendor

hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/telephonycpptest/mock_vendor/libmock_ril_vendor.z.so /system/lib/libril_vendor.z.so
hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/telephonycpptest/mock_vendor/vendor_controller /data/mock_vendor/vendor_controller
hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/telephonycpptest/napi_mock_vendor/libnapi_mock_vendor.z.so /system/lib/module/libnapi_mock_vendor.z.so

hdc shell chmod 777 /system/lib/module/libnapi_mock_vendor.z.so
hdc shell chmod 777 /system/lib/libril_vendor.z.so
hdc shell chmod 777 /data/mock_vendor/vendor_controller

if [ $# -gt 0 ]; then
    hdc shell rm /data/mock_vendor/* -rf
    for file in `ls ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases|grep -vE "\.json|\.list"`
    do
        sleep 0.3
        hdc file send ${OpenHarmony_Standard_System}/out/ohos-arm-release/suites/acts/testcases/${file} /data/mock_vendor/${file}
        hdc shell chmod +x /data/mock_vendor/${file}
    done
fi

md5sum ${OpenHarmony_Standard_System}/out/ohos-arm-release/telephonycpptest/mock_vendor/libmock_ril_vendor.z.so
hdc shell md5sum /system/lib/libril_vendor.z.so
hdc shell ps -A|grep -E "tel|foun|ril"

