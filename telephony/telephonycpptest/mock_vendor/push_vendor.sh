hdc shell mkdir /data/mock_vendor

hdc file send /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/telephonycpptest/mock_vendor/libril_vendor.z.so /data/mock_vendor/libril_vendor.z.so
hdc file send /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/telephonycpptest/mock_vendor/libril_vendor.z.so /system/lib/libril_vendor.z.so
hdc file send /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/telephonycpptest/mock_vendor/vendor_controller /data/mock_vendor/vendor_controller

if [ $# -gt 0 ]; then
    hdc shell rm /data/mock_vendor/* -rf
    for file in `ls /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/suites/acts/testcases|grep -vE "\.json|\.list"`
    do
        hdc file send /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/suites/acts/testcases/${file} /data/mock_vendor/${file}
        hdc shell chmod +x /data/mock_vendor/${file}
    done
fi

md5sum /home/test/code/OpenHarmony_Standard_System/out/ohos-arm-release/telephonycpptest/mock_vendor/libril_vendor.z.so
hdc shell md5sum /system/lib/libril_vendor.z.so
hdc shell ps -A|grep -E "tel|foun|ril"

