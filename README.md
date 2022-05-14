# XTS

## 介绍
XTS是为了保证多平台下ArkUI的功能与OpenHarmony ArkUI功能保持一致，均为从OpenHarmony [acts仓](https://gitee.com/openharmony/xts_acts/tree/master/arkui)移植过来的测试套

## 目录说明

```
├── OAT.xml             #OAT文件
└── android             #Android平台xts用例目录
|    └── xts_2.0        #声明式范式XTS用例
|    └── xts_1.0        #类Web式XTS用例，待补充
└── IOS                 #IOS平台xts用例目录，待补充
     └── xts_2.0
     └── xts_1.0
```

## 执行

### Android平台XTS执行说明

#### 环境配置

如果您使用的是Ubuntu系统直接通过USB连接的Android真机，可跳过此步骤。本章节针对在Windows连接Linux服务器或虚拟机的场景，此场景下，Android真机是通过USB直接连接的Windows平台，因此需要对adb端口进行转发，保证在Linux服务器或虚拟机上能通过adb连接Android真机

* 获取adbportforward,并分别在Windows和Linux中分别放置一份
```
git clone https://github.com/p2401kumar/AdbPortForward.git
```

* Windows配置

在Windows中解压缩adbportforward，并在lib目录下新建批处理脚本，脚本内容如下
```
java -jar adbportforward.jar server adblocation=path/to/adb
pause
```
执行此脚本

* Linux配置

同样，在Linux中解压缩adbportforward，并在lib目录下新建shell脚本，内容如下
```
java -jar adbportforward.jar client adblocation=path/to/adb remotehost=192.168.0.159

```
运行此脚本，新建一个终端窗口，并可通过adb访问Android真机

#### 用例执行

进入到android/xts_2.0目录下，执行以下命令便可执行单测试套

```
./run.sh {模块名}
```



