//
// Created by Benjamin D. Horn on 3/11/17.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "isPrime.h"
#include "isPrimeBuilder.h"


using testing::Eq;
using namespace std;

namespace {
    class testClassIsPrime : public testing::Test {
    public:
    };
}

TEST_F(testClassIsPrime, test1){
    isPrime object(0);
    ASSERT_FALSE(object.getCheck());
    object.setCheck(1);
    ASSERT_FALSE(object.getCheck());
    object.setCheck(2);
    ASSERT_TRUE(object.getCheck());
}

TEST_F(testClassIsPrime, test2){
    isPrime object(3);
    ASSERT_TRUE(object.getCheck());
    object.setCheck(2017);
    ASSERT_TRUE(object.getCheck());
    object.setCheck(7907);
    ASSERT_TRUE(object.getCheck());
    object.setCheck(7919);
    ASSERT_TRUE(object.getCheck());
}

TEST_F(testClassIsPrime, test3){
    isPrime object(37199);
    ASSERT_TRUE(object.getCheck());
    object.setCheck(39119);
    ASSERT_TRUE(object.getCheck());
}

TEST_F(testClassIsPrime, test4){
    isPrime object(18153);
    ASSERT_FALSE(object.getCheck());
    object.setCheck(3*4001);
    ASSERT_FALSE(object.getCheck());
}

// Now testing prime builder

TEST_F(testClassIsPrime, test5){
    isPrimeBuilder object(10);
    object.runPrimes();
    ASSERT_EQ(object.getSize(), 4);

    isPrimeBuilder object2(100);
    object2.runPrimes();
    ASSERT_EQ(object2.getSize(),25 );

    isPrimeBuilder object3(1000);
    object3.runPrimes();
    ASSERT_EQ(object3.getSize(), 168);

    isPrimeBuilder object4(10000000);
    object4.runPrimes();
    ASSERT_EQ(object4.getSize(), 664579);

    isPrimeBuilder object5(10000000);
    object5.runPrimes();
    ASSERT_EQ(object5.getSize(), 664579);

    isPrimeBuilder object6(10000000);
    object6.runPrimes();
    ASSERT_EQ(object6.getSize(), 664579);
}

TEST_F(testClassIsPrime, test6){
    isPrimeBuilder object(10);
    object.runPrimesBuiler();
    ASSERT_EQ(object.getSize(), 4);

    isPrimeBuilder object2(100);
    object2.runPrimesBuiler();
    ASSERT_EQ(object2.getSize(),25 );

    isPrimeBuilder object3(1000);
    object3.runPrimesBuiler();
    ASSERT_EQ(object3.getSize(), 168);

    isPrimeBuilder object4(10000000);
    object4.runPrimesBuiler();
    ASSERT_EQ(object4.getSize(), 664579);

    isPrimeBuilder object5(10000000);
    object5.runPrimesBuiler();
    ASSERT_EQ(object5.getSize(), 664579);

    isPrimeBuilder object6(10000000);
    object6.runPrimesBuiler();
    ASSERT_EQ(object6.getSize(), 664579);
}
