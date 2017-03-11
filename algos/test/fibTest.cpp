//
// Created by Benjamin D. Horn on 3/11/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "fib.h"


using testing::Eq;
using namespace std;

namespace {
    class testClassFib : public testing::Test {
    public:
    };
}

TEST_F(testClassFib, test1){
    fib object;
    ASSERT_EQ(object.getFib(5), 5);
}

TEST_F(testClassFib, test2){
    fib object;
    ASSERT_EQ(object.getFib(7), 13);
}

TEST_F(testClassFib, test3){
    fib object;
    ASSERT_EQ(object.getFib(29), 514229);
}

TEST_F(testClassFib, test4){
    fib object;
    ASSERT_EQ(object.getFib(34), 1597 *3571);
}

TEST_F(testClassFib, test5){
    fib object;
    ASSERT_EQ(object.getFib(1), 1);
}