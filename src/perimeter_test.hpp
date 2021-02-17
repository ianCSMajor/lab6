#ifndef __PERIMETER_TEST_HPP__
#define __PERIMETER_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/rectangle.hpp"

TEST(PerimeterTest, PerimeterEvaluatePos) {
    Rectangle rect;
    rect.set_width(6);
    rect.set_height(4);
    EXPECT_NEAR(rect.perimeter(), 20, 0.01);
}

TEST(PerimeterTest, PerimeterEvaluateZero) {
    Rectangle rect;
    rect.set_width(0);
    rect.set_height(0);
    EXPECT_NEAR(rect.perimeter(), 0, 0.01);
}

TEST(PerimeterTest, PerimeterEvaluateNeg) {
    Rectangle rect;
    rect.set_width(2);
    rect.set_height(-7);
    EXPECT_NEAR(rect.perimeter(), -10, 0.01);
}

#endif
