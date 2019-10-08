cmake_minimum_required(VERSION 3.10)
project("GLUvod")

include_directories(src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
#include_directories(/home/davidkomolik/Documents/vcpkg-master/installed/x64-linux/share/)


set (SOURCES
    src/main.cpp
    src/Animals/Animal.cc
)

set( HEADERS 
    src/Animals/Animal.h 
    src/Animals/VarAnimal.h 
    src/Plants/Plant.h 
    src/Plants/Flower.h 
    src/Plants/Cactus.h
    src/Plants/Tree.h
    )



add_executable(testGL ${HEADERS} ${SOURCES}  )

find_package(Boost COMPONENTS system python filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})
                    
add_subdirectory(testy)

