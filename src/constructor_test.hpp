#ifndef _CONSTRUCTOR_TEST_HPP
#define _CONSTRUCTOR_TEST_HPP

#include "gtest/gtest.h"

#include "../header/rectangle.hpp"

TEST(ConstructTest, ConstructTestPerimeter) {
    Rectangle rect(5, 3);
    EXPECT_NEAR(rect.perimeter(), 16, 0.01);
}

TEST(ConstructTest, ConstructTestArea) {
    Rectangle rect(5, 3);
    EXPECT_NEAR(rect.area(), 15, 0.01);
}

TEST(ConstructTest, ConstructTestPerimeter2) {
    Rectangle rect(8, 1);
    EXPECT_NEAR(rect.perimeter(), 18, 0.01);
}

TEST(ConstructTest, ConstructTestArea2) {
    Rectangle rect(8, 1);
    EXPECT_NEAR(rect.area(), 8, 0.01);
}

TEST(ConstructTest, ConstructTestPerimeter3) {
    Rectangle rect(6, 9);
    EXPECT_NEAR(rect.perimeter(), 30, 0.01);
}

TEST(ConstructTest, ConstructTestArea3) {
    Rectangle rect(6, 9);
    EXPECT_NEAR(rect.area(), 54, 0.01);
}
#endif
