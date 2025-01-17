cmake_minimum_required(VERSION 3.27)
project(LEDdriver C)

set(CMAKE_C_STANDARD 11)

include_directories(build/vendor/cmock/src)
include_directories(build/vendor/unity/src)
include_directories(src)

add_executable(LEDdriver
        build/test/runners/test_Demo_runner.c
        build/vendor/cmock/src/cmock.c
        build/vendor/cmock/src/cmock.h
        build/vendor/cmock/src/cmock_internals.h
        build/vendor/unity/src/unity.c
        build/vendor/unity/src/unity.h
        build/vendor/unity/src/unity_internals.h
        src/Demo.c
        src/Demo.h
        test/test_Demo.c)
