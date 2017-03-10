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
    ASSERT_EQ(b.getList(), 10);
}

