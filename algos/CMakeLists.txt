cmake_minimum_required(VERSION 3.6)
project(algos)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest-release-1.8.0)
include_directories(lib/googletest-release-1.8.0/googletest/include)
include_directories(lib/googletest-release-1.8.0/googlemock/include)

set(SOURCE_FILES main.cpp test/horner.h test/hornerTest.cpp test/euclidTest.cpp test/euclid.h test/bubbleSort.h test/bubbleSortTest.cpp test/quickSortTest.cpp test/quickSort.h)
add_executable(algos ${SOURCE_FILES} test/horner.h test/hornerTest.cpp test/euclidTest.cpp test/euclid.h test/bubbleSort.h test/bubbleSortTest.cpp test/quickSortTest.cpp test/quickSort.h)
target_link_libraries(algos gtest gtest_main)