cmake_minimum_required(VERSION 3.19)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c test2.cpp)

set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

if(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    file(WRITE ${PROJECT_BINARY_DIR}\\crun.bat start\ /wait\ ccore.bat)
    file(WRITE ${PROJECT_BINARY_DIR}\\ccore.bat @echo\ off\ntitle\ ${CMAKE_PROJECT_NAME}\ncls\n${CMAKE_PROJECT_NAME}\npause\nexit)
endif()