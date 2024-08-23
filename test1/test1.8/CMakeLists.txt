cmake_minimum_required(VERSION 3.22)

project(val_test)


# 声明包含的*.c和*.h文件
set(HOME /mnt/c/Users/congh2/Documents/vscode_workspaces/c_test/test1.5)

file(GLOB SRC ${HOME}/src/*.c)
include_directories(${HOME}/include)

# 声明可执行程序输出位置
set(EXECUTABLE_OUTPUT_PATH ${HOME}/output)

# 输出相关信息
message(STATUS "src files list: ${SRC}")
message(STATUS "HOME path: ${HOME}")

# 生成可执行程序
add_executable(arg_test ${SRC})
