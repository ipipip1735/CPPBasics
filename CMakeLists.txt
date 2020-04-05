cmake_minimum_required(VERSION 3.15)
project(CPPBasics)
set(CMAKE_CXX_STANDARD 14)

include_directories(header)#增加头文件搜索目录
link_directories(lib)#增加头文件搜索目录

#使用动态连接库
#add_library(car SHARED lib/Car.cpp syntax/pointerTrail.cpp)#编译动态链接库
#link_libraries(car)#增加全局库

#add_executable(cpp main.cpp)
##target_link_libraries(cpp car)


add_executable(cpp syntax/pointerTrail.cpp temp.cpp)#测试指针
