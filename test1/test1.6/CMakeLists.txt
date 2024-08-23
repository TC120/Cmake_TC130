cmake_minimum_required(VERSION 3.22)

project(val_test)


# 声明包含的*.c和*.h文件
set(HOME /mnt/c/Users/congh2/Documents/vscode_workspaces/c_test/test1.6)

file(GLOB SRC ${HOME}/src/*.c)
include_directories(${HOME}/include)

# 声明可执行程序输出位置
set(EXECUTABLE_OUTPUT_PATH ${HOME}/output)
# 指定库生成路径
set(LIBRARY_OUTPUT_PATH ${HOME}/share)
# 声明生成静态库文件 add_library(库名称 STATIC 源文件1 [源文件2] ...) 
# 声明生成动态库文件 add_library(库名称 SHARED 源文件1 [源文件2] ...) 
# add_library(val_test STATIC ${SRC}) 
add_library(val_test SHARED ${SRC}) 


# 生成可执行程序
add_executable(arg_test ${SRC})









