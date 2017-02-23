//
// Created by Benjamin D. Horn on 2/22/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "binarySearch.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassBinarySearch : public testing::Test {
    public:
    };
}

TEST_F(testClassBinarySearch, test1){
    binarySearch object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 10000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    ASSERT_TRUE(object.binSearchCall(my_vec,3));
}

TEST_F(testClassBinarySearch, test2){
    binarySearch object;
    vector<int> my_vec;
    int number_of_items = 10000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    ASSERT_TRUE(object.binSearchCall(my_vec,500));
}

TEST_F(testClassBinarySearch, test3){
    binarySearch object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 10050;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    ASSERT_TRUE(object.binSearchCall(my_vec,10000));
}

TEST_F(testClassBinarySearch, test4){
    binarySearch object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 10000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    ASSERT_TRUE(object.binSearchCall(my_vec,1738));
}


TEST_F(testClassBinarySearch, test5){
    binarySearch object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1000000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    ASSERT_TRUE(object.binSearchCall(my_vec,556869));
}

TEST_F(testClassBinarySearch, test6){
    binarySearch object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 1000000;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(i);
    }
    for(int i = 0 ; i < my_vec.size(); i++){
        if(my_vec.at(i) == 556869){
            ASSERT_TRUE(1);
        }
    }
}

