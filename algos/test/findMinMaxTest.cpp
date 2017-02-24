//
// Created by Benjamin D. Horn on 2/24/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "findMinMax.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassFindMinMax : public testing::Test {
    public:
    };
}

TEST_F(testClassFindMinMax, testMax){
    findMinMax object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    int max = 0;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 100);
        if(my_vec.at(i) > max){
            max = my_vec.at(i);
        }
    }
    ASSERT_EQ(object.findMax(my_vec), max);
}

TEST_F(testClassFindMinMax, testMin){
    findMinMax object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    int min = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 100);
        if(my_vec.at(i) < min){
            min = my_vec.at(i);
        }
    }
    ASSERT_EQ(object.findMin(my_vec), min);
}

TEST_F(testClassFindMinMax, testMinMax){
    findMinMax object;
    vector<int> my_vec;
    srand(time(0));
    int number_of_items = 100;
    int min = 100;
    for(int i = 0; i < number_of_items; i++){
        my_vec.push_back(rand() % 100);
        if(my_vec.at(i) < min){
            min = my_vec.at(i);
        }
    }
    ASSERT_EQ(object.findMin(my_vec), min);
}
