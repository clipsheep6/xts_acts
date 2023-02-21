# 源码下载
获取OpenHarmony源码：
```python
获取方式1:从码云代码仓库获取.通过repo或git工具从代码仓库中下载,此方式可获取最新代码.

获取方式2:通过DevEco Marketplace网站获取.访问DevEco Marketplace网站,查找满足需求的开源发行版,直接下载(或者定制后下载),再通过hpm-cli命令工具将所需的组件及工具链下载,安装到本地.

获取方式3:从镜像站点下载归档后的发行版压缩文件.如果要获取旧版本的源码,也可通过此方式获取,此方式下载速度较快.

获取方式4:从github代码仓库获取.通过repo或git工具从代码仓库中下载,此方式可获取最新代码.
```
## 前提条件
1、注册码云gitee帐号。

2、注册码云SSH公钥，请参考码云帮助中心。

3、安装git客户端和git-lfs并配置用户信息。
```python
git config --global user.name "yourname"
git config --global user.email "your-email-address"
git config --global credential.helper store
```
4、执行如下命令安装码云repo工具。

下述命令中的安装路径以"~/bin"为例，请用户自行创建所需目录。
```python
mkdir ~/bin
curl https://gitee.com/oschina/repo/raw/fork_flow/repo-py3 -o ~/bin/repo 
chmod a+x ~/bin/repo
pip3 install -i https://repo.huaweicloud.com/repository/pypi/simple requests
```
5、将repo添加到环境变量。
```python
vim ~/.bashrc               # 编辑环境变量
export PATH=~/bin:$PATH     # 在环境变量的最后添加一行repo路径信息
source ~/.bashrc            # 应用环境变量
```
# 编译
## 1、hb set
```python
选择 "rtos_kernel_benchmark"
```
## 2、hb build -f
## 3、烧录
```python
1.Windows10安装CH341串口驱动.
2.安装烧录工具ST-LINK Utility.
3.连接开发板烧录串口,进入烧录工具ST-LINK Utility,选取下拉菜单Target中的Program&Verify(或直接按下快捷键ctrl+p).
4.XTS测试:选取out/st/路径下的rtos_kernel_benchmark目录的OHOS_Image.bin文件并点击Start开始烧录.
5.通过串口工具XCOM来查看开发板通过串口打印的输出,波特率选择115200.
```
# 测试结果查看
```python
############## Uniproton test ###############
perfTest setup
##################start DEADLOCKBREAKTEST##################
###############end DEADLOCKBREAKTEST cycle=1030###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:90:DEADLOCKBREAKTEST:PASS
##################start TASKPREEMPT##################
###############end TASKPREEMPT cycle=397###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:99:TASKPREEMPT:PASS
##################start MESSAGELATENCY##################
###############end MESSAGELATENCY cycle=361###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:108:MESSAGELATENCY:PASS
##################start INTERRUPTLATENCY##################
###############end INTERRUPTLATENCY cycle=150###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:117:INTERRUPTLATENCY:PASS
##################start TASKSWITCH##################
###############end TASKSWITCH cycle=274###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:126:TASKSWITCH:PASS
##################start SEMAPHORESHUFFLE##################
###############end SEMAPHORESHUFFLE cycle=801###############
../../../../test/xts/acts/kernel_lite/uniproton_perf_testing/src/perfTest.c:135:SEMAPHORESHUFFLE:PASS
perfTest teardown

------------------
6 Tests 0 Failures 0 Ignored
OK
ALL the test suites finished
```