## 记录下可能遇到的问题

### 1、在windows下输出中文乱码的问题
原因:vscode默认文件编码为utf8，cmd窗口为ansi(gbk),
设置cmd 窗口为utf8 模式，(只对当前窗口有效)命令:chcp 65001
永久有效方式,修改注册表按顺序找到HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Command Processor。添加字符串值 autorun修改数据位autorun
参考链接:https://jingyan.baidu.com/article/d7130635e8a38413fdf4753b.html  
### 2、gdb调试不支持中文路径
 所以mingw安装路径，代码和可执行程序中都不能有中文路径