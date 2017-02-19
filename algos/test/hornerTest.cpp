//
// Created by Benjamin D. Horn on 2/18/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "horner.h"

using testing::Eq;

namespace {
    class testClassHorner : public testing::Test {
    public:
        horner object;
    };
}

TEST_F(testClassHorner, test1){
    ASSERT_EQ(1,1);
}