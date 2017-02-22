//
// Created by Benjamin D. Horn on 2/21/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "insertionSort.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassInsertion : public testing::Test {
    public:
    };
}

TEST_F(testClassInsertion, test1){
    insertionSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 0;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}


TEST_F(testClassInsertion, test2){
    insertionSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassInsertion, test3){
    insertionSort object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 20);
    }
    object.runCurrentSort(my_vec);
    ASSERT_TRUE(object.isSorted(my_vec));
}

TEST_F(testClassInsertion, test4){
    insertionSort object;
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


TEST_F(testClassInsertion, test5){
    insertionSort object;
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