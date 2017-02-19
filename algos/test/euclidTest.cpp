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
        euclid object;
    };
}

TEST_F(testClassEuclid, test1){
    ASSERT_EQ(1,1);
}