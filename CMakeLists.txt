cmake_minimum_required(VERSION 3.10)
project("GLUvod")

include_directories(cpptesty)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(/home/davidkomolik/Documents/vcpkg-master/installed/x64-linux/share/)



add_executable(testGL test.cc Animal.cc Animal.h )

find_package(Boost COMPONENTS system python filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})
                    
add_subdirectory(testy)

