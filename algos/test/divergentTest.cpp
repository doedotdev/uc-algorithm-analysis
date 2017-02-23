//
// Created by Benjamin D. Horn on 2/23/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "divergent.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassDivergent : public testing::Test {
    public:
    };
}

TEST_F(testClassDivergent, testSlow){
    divergent object;
    ASSERT_EQ(object.normal(999), 499500);
}

TEST_F(testClassDivergent, testFast){
    divergent object;
    ASSERT_EQ(object.fast(999), 499500);
}

TEST_F(testClassDivergent, test1){
    divergent object;
    ASSERT_EQ(object.normal(99999999), 4999999950000000);
}

TEST_F(testClassDivergent, test2){
    divergent object;
    ASSERT_EQ(object.fast(99999999), 4999999950000000);
}

TEST_F(testClassDivergent, test3){
    divergent object;
    ASSERT_EQ(object.normal(999999), 499999500000);
}

TEST_F(testClassDivergent, test4){
    divergent object;
    ASSERT_EQ(object.fast(999999), 499999500000);
}
