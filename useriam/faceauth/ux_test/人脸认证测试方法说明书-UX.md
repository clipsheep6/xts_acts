## 人脸认证测试方法说明书-UX

#### 一、准备签名的hap包(若已经有签名的hap包，此步骤忽略)
1.把工程的UX部分在DevEco studio打开，等待配置完成

2.点击工具栏Build->Build Hap(s)编译得到未签名的hap包

3.在工程根目录build->outputs->hap->debug->phone下的未签名的hap包放到hap_sign文件夹下

4.在hap_sign目录下打开cmd，输入java -jar hapsigntool/hapsigntoolv2.jar sign -mode localjks -privatekey "OpenHarmony Application Release" -inputFile entry-debug-standard-unsigned.hap -outputFile faceEnroll2.hap -keystore "key/OpenHarmony.jks" -keystorepasswd 123456 -keyaliaspasswd 123456 -signAlg SHA256withECDSA -profile "systemui.p7b" -certpath "certificates/OpenHarmonyApplication.pem"得到已签名的hap包
(注：每次签名新的包把之前的包删掉)

#### 二、将hap包推入板子中

1.将板子连通后，执行以下命令推入

hdc_std.exe file send E:/hap_sign/faceEnroll2.hap /data/faceEnroll2.hap (其中E:/hap_sign/faceEnroll2.hap为本地生成签名hap包的路径，可根据自己路径选择)

hdc_std.exe shell chmod 644 /data/faceEnroll2.hap

hdc_std.exe shell bm install -p /data/faceEnroll2.hap

2.如果需要装新的包需要把之前的包卸载，命令如下

hdc_std.exe shell bm dump -a (查询包名)

hdc_std.exe shell bm uninstall -n com.example.faceenroll.hmservice

#### 三、授权

hdc_std.exe file send E:\FaceAuthPrepare /data/FaceAuthPrepare(此文件为c++编译生成的授权文件，E:\FaceAuthPrepare同理)

hdc_std.exe shell chmod 777 /data/FaceAuthPrepare

hdc_std.exe shell /data/FaceAuthPrepare --gtest_filter=FaceAuthPrepare.FaceAuthPrepare_CPPAPI_0100

hdc_std.exe shell chmod 777 -R data

#### 四、测试

使用MobaXterm_Personal连接板子，输入hilog | grep -E -i "FaceEnroll-faceModel|FaceAuth"查看日志

在板子上点开faceEnroll包后，点击左上角回退按钮进入到测试条例页面，分别点击每一个用例查看不同的效果。


#### 附录1

签名hap包时输入的命令需要配置java环境变量

将java文件夹放在C:\Program Files下，将里面的jdk1.8.0_281和jre1.8.0_281分别配置上环境变量

#### 注意

由于兼顾多种测试，在UX测试过程中会存在过程时间较慢，请耐心等待



















