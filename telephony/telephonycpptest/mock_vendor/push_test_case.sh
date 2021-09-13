hdc shell mkdir /data/telephonycpptest


    hdc shell rm /data/telephonycpptest/* -rf
    for file in `ls /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/suites/acts/testcases|grep -vE "\.json|\.list"`
    do
	sleep 0.3
        hdc file send /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/suites/acts/testcases/${file} /data/telephonycpptest/${file}
        hdc shell chmod +x /data/telephonycpptest/${file}
    done


