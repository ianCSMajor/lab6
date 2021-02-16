#include <iostream>
#include "rectangle.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(Constructor, num_of_args){
Rectangle *rec(7, 8); 
EXPECT_EQ(rec, rec(7, 8));
}
TEST(Constructor, data_type){
Rectangle * data = new Rectangle(10, 13);
int temp2 = data->getHeight();
EXPECT_EQ(13, temp2);
}
TEST(Constructor, data_type2){
Rectangle * data = new Rectangle(10, 13);
int temp = data->getWidth();

EXPECT_EQ(10, temp);
}


TEST(Perimeter, DISABLED_Perim1){
Rectangle *perim = new perim(5, 5);
EXPECT_EQ(20, perim->perimeter());
}
TEST(Perimeter, DISABLED_Perim2){
Rectangle *perim2 = new perim2(10, 10);
EXPECT_EQ(40, perim2->perimeter());
}
TEST(Perimeter, DISABLED_Perim3){
Rectangle * perim3 = new perim(3, 4){
EXPECT_EQ(14, perim3->perimeter());
A}




TEST(Area, Test1){
Rectangle *rect = new rect(2, 2);
EXPECT_EQ(4, rect->area());
}


TEST(Area, Test2){
Rectangle *rect2 = new rect(5, 3);
EXPECT_EQ(15, rect->area());
}

TEST(Area, Test3){
Rectangle *rect3 = new rect(1, 3);
EXPECT_EQ(3, rect->area());
}

int main(int argc, char **argv) {   
::testing::InitGoogleTest(&argc, argv);   
return RUN_ALL_TESTS(); }
