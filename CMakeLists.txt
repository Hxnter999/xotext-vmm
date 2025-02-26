cmake_minimum_required(VERSION 3.20)
project(xotext_vmm)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/vendor/FindWDK/")
find_package(WDK REQUIRED)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_LIBRARIES "")

wdk_add_driver(tiny_driver KMDF 1.15
    main.cpp
)