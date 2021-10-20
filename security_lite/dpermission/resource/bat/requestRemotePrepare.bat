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
hdc_std.exe list targets
hdc_std.exe -t 【设备号1】  shell chmod 777 -R /data/
hdc_std.exe -t 【设备号2】  shell chmod 777 -R /data/
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdA.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdB.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdC.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdD.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdE.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdF.hap 
hdc_std -t 【设备号1】  shell bm install -r -p DpmsStServiceDistributedThirdGroup.hap  

hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdA.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdB.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdC.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdD.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdE.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdF.hap 
hdc_std -t 【设备号2】  shell bm install -r -p DpmsStServiceDistributedThirdGroup.hap  

hdc_std.exe -t 【设备号2】  shell data/DistributedRequestPermissionFromRemotePrepareCPPTest

pause;