//
// Created by Benjamin D. Horn on 2/22/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "reverseNumber.h"
#include <time.h>


using testing::Eq;
using namespace std;

namespace {
    class testClassReverseInt: public testing::Test {
    public:
    };
}

TEST_F(testClassReverseInt, test1){
    long long int my_int = 123456789;
    reverseNumber object(my_int);
    ASSERT_EQ(987654321, object.rev());

}