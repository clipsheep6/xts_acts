# 热管理服务XTS

-   [描述](#section0056945901)

## 描述<a name="section0056945901"></a>

### 执行性能测试(thermal_common_event.test.js), 单元测试用例(thermal_unittest.test.js)和接收公共事件用例(thermal_common_event.test.js)前, 请手动执行temp.sh

步骤：

1. 手动推temp.sh 到设备中
    $ hdc_std file send temp.sh /data

2. 执行temp.sh
    $ sh temp.sh

### 进行压力测试请取消index.js中, 请在onShow()方法中做以下修改：
取消下面三行代码的注释，并注释掉core.execute()

    /**
    * var press = new PressureTest(core);
    * press.setPressTimes(10000);
    * press.run();
    */

并设置执行时间为2个小时以上在Test.json