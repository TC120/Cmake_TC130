cmake_minimum_required(VERSION 3.22)

project(val_test)


#debug版本才能调试
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# 声明包含的*.c和*.h文件
set(HOME /mnt/c/Users/congh2/Documents/vscode_workspaces/c_test/test1.9)

file(GLOB SRC ${HOME}/src/*.c)
include_directories(${HOME}/include)

# 声明可执行程序输出位置
set(EXECUTABLE_OUTPUT_PATH ${HOME}/output)

# 输出相关信息
message(STATUS "src files list: ${SRC}")
message(STATUS "HOME path: ${HOME}")

# 生成可执行程序
add_executable(arg_test ${SRC})
