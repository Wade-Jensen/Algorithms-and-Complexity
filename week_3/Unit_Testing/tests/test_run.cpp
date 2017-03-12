//
// Created by WadeJensen on 12/03/2017.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        ClassName obj;
        ClassDeclaration() {
            obj; // could put a make method here
        }
    };
}

TEST_F(ClassDeclaration, nameOfTheTest1) {
    ASSERT_EQ("","");
}

TEST_F(ClassDeclaration, nameOfTheTest2) {
    ASSERT_EQ("0","1");
}

