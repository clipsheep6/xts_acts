goto comment 
# Copyright (c) 2021 Huawei Device Co., Ltd.
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
:comment
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.a
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.b
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.c
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.d 
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.e
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.f
hdc_std -t 【客体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.group

hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.a
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.b
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.c
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.d 
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.e
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.f
hdc_std -t 【主体设备】 shell  bm uninstall -n com.ohos.dpmsst.service.distributed.third.group

pause;