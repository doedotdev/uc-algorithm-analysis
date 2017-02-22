//
// Created by Benjamin D. Horn on 2/21/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mergeSort.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassMerge : public testing::Test {
    public:
    };
}

TEST_F(testClassMerge, test1){
    mergeSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 0;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}


TEST_F(testClassMerge, test2){
    mergeSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassMerge, test3){
    mergeSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassMerge, test4){
    mergeSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    ASSERT_FALSE(object.isSorted(my_vec));
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}


TEST_F(testClassMerge, test5){
    mergeSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 10000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    ASSERT_FALSE(object.isSorted(my_vec));
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}