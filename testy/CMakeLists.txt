
cmake_minimum_required(VERSION 3.5)
project(basic_test)

enable_testing()

include_directories(src/Animals)
include_directories(..)
include_directories(testy)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
set (SOURCES
    AnimalTest/LegTest.cpp
	../src/Animals/Animal.cc
)

set(HEADERS
    stdafx_test.h
)

add_executable( runUnitTests ${HEADERS} ${SOURCES})
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest pthread gtest_main)
add_test( runUnitTests runUnitTests )
