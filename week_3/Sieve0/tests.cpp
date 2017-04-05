#include <iostream>
#include "gtest/gtest.h"

#include "CountPrimes.h"


TEST(countPrimes, twenty) {
    EXPECT_EQ(8, countPrimes(20));
}

TEST(countPrimes, fifty) {
    EXPECT_EQ(15, countPrimes(50));
}

TEST(countPrimes, hundred) {
    EXPECT_EQ(25, countPrimes(100));
}

TEST(countPrimes, twoHundred) {
    EXPECT_EQ(46, countPrimes(200));
}

TEST(countPrimes, fiveHundred) {
    EXPECT_EQ(95, countPrimes(500));
}

TEST(countPrimes, thousand) {
    EXPECT_EQ(168, countPrimes(1000));
}

TEST(countPrimes, tenThousand) {
    EXPECT_EQ(1229, countPrimes(10000));
}

TEST(countPrimes, hundredThousand) {
    EXPECT_EQ(9592, countPrimes(100000));
}
//TEST(IndependentMethod, ResetsToZero2) {
//	int i = 0;
//	independentMethod(i);
//	EXPECT_EQ(false, i);
//}
/*
// The fixture for testing class Project1. From google test primer.
class Project1Test : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	Project1Test() {
		// You can do set-up work for each test here.
	}

	virtual ~Project1Test() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for Project1.
	Project1 p;
};
*/
// Test case must be called the class above
// Also note: use TEST_F instead of TEST to access the test fixture (from google test primer)
/*
TEST_F(Project1Test, MethodBarDoesAbc) {
	int i = 0;
	p.foo(i); // we have access to p, declared in the fixture
	EXPECT_EQ(1, i);
}
*/
// }  // namespace - could surround Project1Test in a namespace