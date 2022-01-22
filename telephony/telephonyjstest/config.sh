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


# 配置发送短信的电话号码
config_const_var[0]="const TEST_PHONY_NUMBER = '12345678901';"

# 配置自动接听的电话号码
config_const_var[1]="const AUTO_ACCEPT_NUMBER = '10086';"
# 配置自动接听的电话号码2
config_const_var[2]="const AUTO_ACCEPT_NUMBER2 = '10010';"
# 配置不接听的电话号码
config_const_var[3]="const NOT_ACCEPT_NUMBER = '00000000000';"
# 配置区号+座机电话号码
config_const_var[4]="const PHONE_NUMBER_AREA_LAND = '089800000000';"
# 配置8位座机电话号码
config_const_var[5]="const PHONE_NUMBER_LENGTH_8 = '86459751';"

# SIM卡正确的PIN，PUK，PIN2和PUK2密码
config_const_var[6]="const CORRECT_PIN = '1234';"
config_const_var[7]="const CORRECT_PUK = '82160694';"
config_const_var[8]="const CORRECT_PIN2 = '87968263';"
config_const_var[9]="const CORRECT_PUK2 = '06315781';"

# SIM卡网络PIN密码和PUK密码
config_const_var[10]="const SIM_PN_PIN_PASSWORD = '1111';"
config_const_var[11]="const SIM_PN_PUK_PASSWORD = '1112';"
config_const_var[12]="const SIM_PU_PIN_PASSWORD = '1113';"
config_const_var[13]="const SIM_PU_PUK_PASSWORD = '1114';"
config_const_var[14]="const SIM_PP_PIN_PASSWORD = '1115';"
config_const_var[15]="const SIM_PP_PUK_PASSWORD = '1116';"
config_const_var[16]="const SIM_PC_PIN_PASSWORD = '1117';"
config_const_var[17]="const SIM_PC_PUK_PASSWORD = '1118';"
config_const_var[18]="const SIM_SIM_PIN_PASSWORD = '1119';"
config_const_var[19]="const SIM_SIM_PUK_PASSWORD = '1120';"

# 默认被测SLOT ID
config_const_var[20]="const DEFAULT_SLOTID = 0;"

for((i = 0; i < ${#config_const_var}; i++))
do
    if [ "${config_const_var[i]}" == "" ]; then
        continue
    fi
    grep_result=``
    key=`echo ${config_const_var[i]}| awk -F= '{print $1}'`
    for line in `grep -nr "${key}"| sed 's/ //g'|grep -v "config.sh"`
    do
        
        file=`echo ${line}|awk -F: '{print $1}'`
        line_no=`echo ${line}|awk -F: '{print $2}'`
        echo $file $line_no
        echo old:`grep "${key}" $file`
        if [ "$1" != "-i" ]; then
            echo preview:`sed $1 "s/${key}.*/${config_const_var[i]}/g" $file | grep "${key}"`
        else
            sed $1 "s/${key}.*/${config_const_var[i]}/g" $file | grep "${key}"
            echo new:`sed "s/${key}.*/${config_const_var[i]}/g" $file | grep "${key}"`
        fi
    done
done