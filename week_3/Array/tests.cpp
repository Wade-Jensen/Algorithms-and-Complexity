#include <iostream>
#include "gtest/gtest.h"

#include "sorting.h"


TEST(isSorted, SingleArrayValue) {
    int values1[] = {0};
    int arrSize = sizeof(values1)/sizeof(values1[0]);
    EXPECT_EQ(true, isSorted(values1, arrSize ));
}

TEST(isSorted, Ascending_Values) {
    int values2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrSize = sizeof(values2)/sizeof(values2[0]);
    EXPECT_EQ(true, isSorted(values2, arrSize ));
}

TEST(isSorted, Ascending_With_Dupes) {
    int values3[] = {0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    int arrSize = sizeof(values3)/sizeof(values3[0]);
    EXPECT_EQ(true, isSorted(values3, arrSize ));
}

TEST(isSorted, Descending) {
    int values4[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arrSize = sizeof(values4)/sizeof(values4[0]);
    EXPECT_EQ(false, isSorted(values4, arrSize ));
}

TEST(isSorted, Descending_With_Dups) {
    int values5[] = {9, 9, 9, 9, 9, 9, 9, 9, 1};
    int arrSize = sizeof(values5)/sizeof(values5[0]);
    EXPECT_EQ(false, isSorted(values5, arrSize ));
}

TEST(isSorted, Rand_Ascending_Mostly) {
    int values6[] = {1, 3, 4, 4, 7, 6, 8, 9};
    int arrSize = sizeof(values6) / sizeof(values6[0]);
    EXPECT_EQ(false, isSorted(values6, arrSize));
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