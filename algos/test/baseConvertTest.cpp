//
// Created by Benjamin D. Horn on 3/10/17.
//



#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "baseConvert.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassBaseConvert : public testing::Test {
    public:
    };
}

TEST_F(testClassBaseConvert, test1){
    baseConvert b;
    b.changeBase(2,2);
    ASSERT_EQ(b.getList(), "10");
}

TEST_F(testClassBaseConvert, test2){
    baseConvert b;
    b.changeBase(300,2);
    ASSERT_EQ(b.getList(), "100101100");
}

TEST_F(testClassBaseConvert, test3){
    baseConvert b;
    b.changeBase(300,36);
    ASSERT_EQ(b.getList(), "8C");
}

TEST_F(testClassBaseConvert, test4){
    baseConvert b;
    b.changeBase(1234,7);
    ASSERT_EQ(b.getList(), "3412");
}

