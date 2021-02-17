#include <iostream>
#include "../header/rectangle.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(Constructor, data_type){
Rectangle * data = new Rectangle(10, 13);
EXPECT_EQ(13, data->getHeight());
EXPECT_EQ(10, data->getWidth());
delete data;
data = nullptr;
}

TEST(Constructor, ConstructTestPerimeter) {
	Rectangle *per = new Rectangle(5, 3);
	EXPECT_NEAR(per->perimeter(), 16, 0.01);
	delete per;
	per = nullptr;
}
TEST(ConstructTest, ConstructTestArea) {     
Rectangle rect(5, 3);     
EXPECT_NEAR(rect.area(), 15, 0.01); }  

TEST(ConstructTest, ConstructTestPerimeter2) {     
Rectangle rect(8, 1);     
EXPECT_NEAR(rect.perimeter(), 18, 0.01); }  

TEST(ConstructTest, ConstructTestArea2) {     
Rectangle rect(8, 1);     
EXPECT_NEAR(rect.area(), 8, 0.01); }  

TEST(ConstructTest, ConstructTestPerimeter3) {     
Rectangle rect(6, 9);     
EXPECT_NEAR(rect.perimeter(), 30, 0.01); }  

TEST(ConstructTest, ConstructTestArea3) {     
Rectangle rect(6, 9);     
EXPECT_NEAR(rect.area(), 54, 0.01); } 

int main(int argc, char **argv) {   
::testing::InitGoogleTest(&argc, argv);   
return RUN_ALL_TESTS(); }
