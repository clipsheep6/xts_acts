

# 人脸认证测试方法说明书-JS API

## **一.**编译命令与测试文件准备（命令中黑体字需要根据测试环境替换）

测试工具：MobaXterm_Personal

授权文件：FaceAuthPrepare

测试hap包：

userauth.hap (com.example.myapplication101)	

performance.hap(com.example.myapplication102)	

nopermission.hap(com.example.myapplication105）	



推文件上板命令：hdc_std.exe -t 15010038475446345206a33293c7b729 file send 本地路径 目标路径

其中  -t 15010038475446345206a33293c7b729 为设备号，区分多个设备，只有一个设备时可以删除

获取设备号命令：hdc_std.exe list targets

**1.推入授权文件:**

hdc_std.exe **-t 15010038475446345206a33293c7b729** file send **C:\Users\bsdadmin\Desktop\so\FaceAuthPrepare** /data/FaceAuthPrepare
hdc_std.exe **-t 15010038475446345206a33293c7b729** shell chmod 777 /data/FaceAuthPrepare

**2.推入测试包并安装:**

hdc_std.exe **-t 15010038475446345206a33293c7b729** file send **C:\Users\bsdadmin\Desktop\face\userauth.hap** /data/userauth.hap
hdc_std.exe **-t 15010038475446345206a33293c7b729** file send **C:\Users\bsdadmin\Desktop\face\performance.hap** /data/performance.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** file send **C:\Users\bsdadmin\Desktop\face\nopermission.hap** /data/nopermission.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell chmod 644 /data/userauth.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell chmod 644 -R /data/performance.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell chmod 644 -R /data/nopermission.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell bm install -p /data/userauth.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell bm install -p /data/performance.hap
hdc_std.exe -t **15010038475446345206a33293c7b729** shell bm install -p /data/nopermission.hap

## **二.**测试

**1.授权:**

hdc_std.exe **-t 15010038475446345206a33293c7b729** shell /data/FaceAuthPrepare --gtest_filter=FaceAuthPrepare.CPPAPI_Prepare_0100

**2.执行测试文件包:**

使用MobaXterm_Personal连接板子，输入  hilog | grep -i biometricauth   查看测试结果

hdc_std.exe **-t 15010038475446345206a33293c7b729** shell chmod 777 -R data 

依次执行以下两条命令（log停止后再执行下一个）

hdc_std.exe **-t 15010038475446345206a33293c7b729** shell aa start -a "com.example.myapplication101.MainAbility" -b "com.example.myapplication101"
hdc_std.exe **-t 15010038475446345206a33293c7b729** shell aa start -a "com.example.myapplication102.MainAbility" -b "com.example.myapplication102"

通过的case示例： [pass]BiometricAuth_JSAPI_4900 ; consuming 3.029S

**3.取消授权:**
hdc_std.exe **-t 15010038475446345206a33293c7b729** shell /data/FaceAuthPrepare --gtest_filter=FaceAuthPrepare.CPPAPI_Prepare_0200

**4.执行测试文件包:**（与步骤2一样）

使用MobaXterm_Personal连接板子，输入  hilog | grep -i biometricauth   查看测试结果

hdc_std.exe **-t 15010038475446345206a33293c7b729** shell chmod 777 -R data 

hdc_std.exe **-t 15010038475446345206a33293c7b729** shell aa start -a "com.example.myapplication105.MainAbility" -b "com.example.myapplication105"





**注意：**每次关机重启后默认没有授权，需重新授权