//
// Created by Benjamin D. Horn on 2/22/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "powers.h"


using testing::Eq;
using namespace std;

namespace {
    class testClassPower : public testing::Test {
    public:
    };
}

TEST_F(testClassPower, test1){
    powers object;

    ASSERT_EQ(object.compute(2,2),4);
}

TEST_F(testClassPower, test2){
    powers object;
    ASSERT_EQ(object.compute(2,30),1073741824);
}

TEST_F(testClassPower, test3){
    powers object;

    ASSERT_EQ(object.compute(3,1),3);
}

TEST_F(testClassPower, test4){
    powers object;

    ASSERT_EQ(object.compute(123456789,1),123456789);
}

TEST_F(testClassPower, test5){
    powers object;

    ASSERT_EQ(object.compute(64,2),4096);
}

