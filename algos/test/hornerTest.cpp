//
// Created by Benjamin D. Horn on 2/18/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "horner.h"
#include <vector>


using testing::Eq;
using namespace std;

namespace {
    class testClassHorner : public testing::Test {
    public:
        horner object;
    };
}

TEST_F(testClassHorner, test1){
    horner object;
    vector<int> my_vec;
    ASSERT_EQ(object.getHorner(my_vec,5),0);
}

TEST_F(testClassHorner, test2){
    horner object;
    vector<int> my_vec;
    my_vec.push_back(1);
    ASSERT_EQ(object.getHorner(my_vec,12),1);
}

TEST_F(testClassHorner, test3){
    horner object;
    vector<int> my_vec;
    my_vec.push_back(1);
    my_vec.push_back(2);
    my_vec.push_back(3);
    ASSERT_EQ(object.getHorner(my_vec,1),6);
}

TEST_F(testClassHorner, test4){
    horner object;
    vector<int> my_vec;
    my_vec.push_back(4);
    my_vec.push_back(5);
    my_vec.push_back(6);
    ASSERT_EQ(object.getHorner(my_vec,10),456);
}