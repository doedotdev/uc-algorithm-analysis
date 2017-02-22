//
// Created by Benjamin D. Horn on 2/21/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "quickSort.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassQuick : public testing::Test {
    public:
    };
}

TEST_F(testClassQuick, test1){
    quickSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 0;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}


TEST_F(testClassQuick, test2){
    quickSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassQuick, test3){
    quickSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassQuick, test4){
    quickSort object;
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


TEST_F(testClassQuick, test5){
    quickSort object;
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