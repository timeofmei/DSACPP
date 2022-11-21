# 简介

本repo为本人在学习[邓俊辉](https://dsa.cs.tsinghua.edu.cn/~deng/)老师《[数据结构](https://dsa.cs.tsinghua.edu.cn/~deng/ds/mooc/)》课中，根据老师讲述与[书内](https://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/)代码，移除Visual Studio依赖（以方便*NIX系统使用者运行源代码），并对目录结构加以调整的代码仓库。

本repo所有C++代码版权归属原作者，但不完全与老师代码一致，在具体实现细节上我会适当做调整。

# 用法

如果你使用Windows系统，请下载老师的源文件运行或安装WSL。我会考虑以后加入对Windows系统的支持。

如果你使用macOS/Linux/WSL系统，请确保系统内有gcc或clang，并且有Python 3.5+运行环境。下载本repo后，首先在本repo根目录下执行

```shell
sudo chmod +x ./run.py
```

之后当你想要编译并运行源文件时（比如fib.cpp)，只需执行

```shell
./run.py fib.cpp 30
```

`run.py`将在repo目录下自动查找源文件（如果有重名源文件，则取第一个）并编译运行。命令行参数将会被传递。

# 关于`run.py`

1. `run.py`输出的运行时间**不包括**编译时间。

2. `run.py`中的`CPP_COMPILER`、`CPP_STANDARD`及`TIME_PRECISION`分别对应C++编译器、编译器所用的C++标准及运行时间保留小数点后位数，可按需更改。

# macOS 运行环境配置

以下命令为macOS系统安装clang（macOS自带Python 3）

```shell
xcode-select --install
```
