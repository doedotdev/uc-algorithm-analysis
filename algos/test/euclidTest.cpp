//
// Created by Benjamin D. Horn on 2/18/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "euclid.h"

using testing::Eq;

namespace {
    class testClassEuclid : public testing::Test {
    public:
        //
    };
}

TEST_F(testClassEuclid, test1){
    euclid object;

    ASSERT_EQ(object.getEuclid(0,0),0);
}

TEST_F(testClassEuclid, test2){
    euclid object;

    ASSERT_EQ(object.getEuclid(1,1),1);
}

TEST_F(testClassEuclid, test3){
    euclid object;

    ASSERT_EQ(object.getEuclid(1234567890123, 1234567890123),1234567890123);
}

TEST_F(testClassEuclid, test4){
    euclid object;

    ASSERT_EQ(object.getEuclid(14563,12345626934),1);
}

TEST_F(testClassEuclid, test5){
    euclid object;

    ASSERT_EQ(object.getEuclid(2*3*4*7*8*9,982451653),1);
}

TEST_F(testClassEuclid, test6){
    euclid object;

    ASSERT_EQ(object.getEuclid(961748941,2*3*4*7*8*9),1);
}