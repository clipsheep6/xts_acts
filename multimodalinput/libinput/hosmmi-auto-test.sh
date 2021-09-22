#!/bin/bash
#
# Copyright (c) 2020 Huawei Device Co., Ltd.
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
#
set -e

cd / && mkdir ./data/temp/
cd / && chmod 777 ./data/temp/
cd / && mkdir ./data/temp/symbol/
cd / && chmod 777 ./data/temp/symbol/
cd / && cd ./data/temp/symbol/ && rm -rf *
hosmmi-virtual-device-manager start mouse &
sleep 2
hosmmi-virtual-device-manager start keyboard &
sleep 2
hosmmi-virtual-device-manager start gamepad &
sleep 2
hosmmi-virtual-device-manager start joystick &
sleep 2
hosmmi-virtual-device-manager start remotecontrol &
sleep 2
hosmmi-virtual-device-manager start knob &
sleep 2
hosmmi-virtual-device-manager start trackball &
sleep 2
hosmmi-virtual-device-manager start touchpad &
sleep 2
hosmmi-server &
cd / && cd ./data/ && chmod 777 single_window_no_switching_test
./single_window_no_switching_test
sleep 2
cd / && cd ./data/ && chmod 777 single_window_registered_test
./single_window_registered_test
sleep 2
cd / && cd ./data/ && chmod 777 single_window_unregistered_test
./single_window_unregistered_test
sleep 2
cd / && cd ./data/ && chmod 777 system_event_windowless_test
./system_event_windowless_test
sleep 2
cd / && cd ./data/ && chmod 777 windowless_registered_test
./windowless_registered_test
sleep 2
cd / && cd ./data/ && chmod 777 single_window_test
./single_window_test