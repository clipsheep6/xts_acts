说明：

1.点击code_check_main.exe

2. 界面显示 请选择检查模式：1.NDK检查 2.SDK检查 3.ACE1.0框架检查
   
   输入 2 回车后，复制本地绝对路径。
   例如：
   请输入source文件夹地址 （本地存放位置）
   D:\interface_sdk-js-master
   请输入target文件夹地址（本地存放位置）
   D:\xts_acts-master

3. 界面解析数据过程

4. 结果显示 例如 SDKresult_1646618750.4916656 结果文件夹：excel和html

5.打开刚刚生成的 SDKresult_1646618750.4916656 结果文件夹，打开html，点击想要看到的dts文件。

6.打开打包好的sdk_main目录同级目录下的whiteList.xlsx，
  将SDKresult_1646618750.4916656 结果文件夹中的sdk_result.xlsx打开，需要加入白名单的行复制到whiteList.xlsx中，b保存，
  后重复1~5步骤，生成新的SDKresult_文件夹，可以看到表格字段中添加的白名单（是否误报，误报原因）两个字段。



补充：
输入3 回车
请输入ace1.0 source文件夹地址
D:\interface_sdk-js-master\api\config
请输入ace1.0 target文件夹地址
D:\xts_acts-master\xts_acts-master\ace\ace_standard

补充：
输入1回车
请输入source文件夹地址：
D:\NEW_NDK_package_0329

注：拉下来的所有包都放在了NEW_NDK_package_0329中。


补充：
system_index.json文件是用于dts文件遍历xts目录用到的文件，可进行补充。
为了便于添加以将其分块处理了，存放在system文件夹中。

补充：

白名单三个工具操作一样。