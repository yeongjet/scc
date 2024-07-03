如何正确用vscode打开？
1.进入`C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools`
2.拷贝VsDevCmd.bat至桌面，改名为VsDevCmd-launch-scc-in-vscode.bat
3.编辑VsDevCmd-launch-scc-in-vscode.bat，把最后面的`exit /B 0`删掉，加上
```
cd /d "D:\project\scc" //项目的绝对路径
code .
```
4.复制桌面VsDevCmd-launch-scc-in-vscode.bat到`C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools`目录下
5.创建VsDevCmd-launch-scc-in-vscode.bat快捷方式至项目的根目录下，重命名为launch-vscode.bat.lnk，以后进入到项目的根目录下，直接双击打开launch-vscode.bat.lnk就可以了
