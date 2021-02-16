#ifndef _AREA_TEST_HPP
#define _AREA_TEST_HPP

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(AreaTest, AreaEvaluatePos) {
    Rectangle rect;
    rect.set_width(5);
    rect.set_height(4);
    EXPECT_NEAR(rect.area(), 20, 0.001);
}
TEST(AreaTest, AreaEvaluateZero) {
    Rectangle rect;
    rect.set_width(0);
    rect.set_height(4);
    EXPECT_NEAR(rect.area(), 0, 0.001);
}

TEST(AreaTest, AreaEvaluateNeg) {
    Rectangle rect;
    rect.set_width(-5);
    rect.set_height(4);
    EXPECT_NEAR(rect.area(), -20, 0.001);
}
#endif
