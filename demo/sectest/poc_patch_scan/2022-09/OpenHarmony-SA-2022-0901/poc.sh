#！/bin/bash

#//OpenHarmony标准系统中cJSON库解析900层的json数据大概会占用60KB栈空间
#修改栈的存储上限，模拟栈资源紧缺的情况，便于触发栈溢出
#或者也可以继续增加嵌套的层数，使栈溢出容易触发，每增加一层会多占用64B的栈空间
ulimit -s 60

#设置LD_LIBARAY_PATH环境变量，指向cJSON的共享库文件存储位置
export LD_LIBRARY_PATH=/data/local/tmp

#运行poc可执行程序
./cjson 
