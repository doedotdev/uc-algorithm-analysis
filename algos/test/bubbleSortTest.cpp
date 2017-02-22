//
// Created by Benjamin D. Horn on 2/21/17.
//

//
// Created by Benjamin D. Horn on 2/18/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "bubbleSort.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassBubble : public testing::Test {
    public:
    };
}

TEST_F(testClassBubble, test1){
    bubble object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 0;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}


TEST_F(testClassBubble, test2){
    bubble object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassBubble, test3){
    bubble object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassBubble, test4){
    bubble object;
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


TEST_F(testClassBubble, test5){
    bubble object;
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