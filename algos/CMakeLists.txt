cmake_minimum_required(VERSION 3.6)
project(algos)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest-release-1.8.0)
include_directories(lib/googletest-release-1.8.0/googletest/include)
include_directories(lib/googletest-release-1.8.0/googlemock/include)

set(SOURCE_FILES main.cpp test/horner.h test/hornerTest.cpp test/euclidTest.cpp test/euclid.h test/bubbleSort.h test/bubbleSortTest.cpp test/quickSortTest.cpp test/quickSort.h test/selectionSort.h test/selectionSortTest.cpp test/insertionSortTest.cpp test/insertionSort.h test/mergeSort.h test/mergeSortTest.cpp test/sortTest.cpp test/powers.h test/powersTest.cpp test/binarySearch.h test/binarySearchTest.cpp test/divergent.h test/divergentTest.cpp test/findMinMax.h test/findMinMaxTest.cpp test/baseConvert.h test/doublyLinkedList.h test/baseConvertTest.cpp test/fib.h test/fibTest.cpp)
add_executable(algos ${SOURCE_FILES} test/horner.h test/hornerTest.cpp test/euclidTest.cpp test/euclid.h test/bubbleSort.h test/bubbleSortTest.cpp test/quickSortTest.cpp test/quickSort.h test/selectionSort.h test/selectionSortTest.cpp test/insertionSortTest.cpp test/insertionSort.h test/mergeSort.h test/mergeSortTest.cpp test/sortTest.cpp test/powers.h test/powersTest.cpp test/binarySearch.h test/binarySearchTest.cpp test/divergent.h test/divergentTest.cpp test/findMinMax.h test/findMinMaxTest.cpp test/baseConvertTest.cpp test/fib.h test/fibTest.cpp)
target_link_libraries(algos gtest gtest_main)