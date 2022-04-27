#!/bin/bash
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
    #return $?
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




