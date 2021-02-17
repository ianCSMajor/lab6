#include <iostream>
#include "../header/rectangle.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(ConstructorTest, data_type){
Rectangle * data = new Rectangle(10, 13);
EXPECT_EQ(13, data->getHeight());
EXPECT_EQ(10, data->getWidth());
delete data;
data = nullptr;
}

TEST(ConstructorTest, ConstructTestPerimeter) {
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

TEST(PerimeterTest, perim) {
Rectangle pos;
pos.setWidth(3);
pos.setHeight(4);
EXPECT_NEAR(pos.perimeter(), 14, 0.01);
}
TEST(PerimeterTest, Negative){
Rectangle pos1;
pos1.setWidth(-1);
pos1.setHeight(5);

if(pos1.getWidth() <= 0){
pos1.setWidth(1);
}
EXPECT_NEAR(pos1.perimeter(), 12, 0.01);
}

TEST(PerimeterTest, zero){

Rectangle zero;

zero.setWidth(0);
zero.setHeight(4);
if(zero.getWidth() <= 0){
zero.setWidth(1);
}
EXPECT_NEAR(zero.perimeter(), 10, 0.01);
}

TEST(AreaTest, Positive){
Rectangle areaObj;
areaObj.setWidth(9);
areaObj.setHeight(4);

EXPECT_NEAR(areaObj.area(), 36, 0.01);
}
TEST(AreaTest, Negative){
Rectangle negObj;
negObj.setWidth(-99);
negObj.setHeight(5);
if(negObj.getWidth() <=0){
negObj.setWidth(1);
}
EXPECT_NEAR(negObj.area(), 5, 0.01);
}

TEST(AreaTest, Zero){
Rectangle zeroObj;
zeroObj.setWidth(0);
zeroObj.setHeight(3);
if(zeroObj.getWidth() <= 0){
zeroObj.setWidth(1);
}
EXPECT_NEAR(zeroObj.area(), 4, 0.01);
}

int main(int argc, char **argv) {   
::testing::InitGoogleTest(&argc, argv);   
return RUN_ALL_TESTS(); }
