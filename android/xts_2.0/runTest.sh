#!/bin/bash
# Copyright (c) 2022 Huawei Device Co., Ltd.
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

SETTING_GRADLE=settings.gradle
GRADLE_COMMAND=./gradlew
MANIFEST_PATH=/src/main/AndroidManifest.xml

if [ -z "$1" ]
  then
    echo "Module name required"
    exit 0
fi


getAllModules() {
    echo $(cat $SETTING_GRADLE | grep "^i" | cut -f2 -d "'")
}

getPackageName() {
    manifest_path=./$1$MANIFEST_PATH
    echo $manifest_path
    echo $(cat $manifest_path)
    
}

modules=$(getAllModules)

if  [[ $modules == *$1* ]]
then
  APP_PACKAGENAME=`sed -n 's/.*package="\([^"]*\)".*/\1/ p' ./$1$MANIFEST_PATH`
  ACTIVITY=`sed -n 's/.*activity android:name="\([^"]*\)".*/\1/ p' ./$1$MANIFEST_PATH`
  echo Start install TestSuite
  $GRADLE_COMMAND :$1:installDebug && echo Finish install TestSuite
  echo Start run TestSuite
  adb shell am start -n $APP_PACKAGENAME/$ACTIVITY && echo Finish run TestSuite
else
  
  echo -e "\e[31m ERROR:Please input correct module name!!! \e[0m"
fi
