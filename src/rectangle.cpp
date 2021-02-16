#include "rectangle.hpp"


Rectangle::Rectangle()
  :width(0), height(0){}
  
Rectangle::Rectangle(int w, int h){
  :width(w), height(h){}

int Rectangle::area(){
if(width <= 0 || height <= 0)
{
	cout << "Error" << endl << "Using default values" << endl;
	Rectangle *plain = new Rectangle(2, 2);
	plain->area();
}
else{
	return (width * height);
}
}  
int Rectangle::perimeter(){
	return 2*(width + height);
}
void Rectangle::setWidth(int w){
	width = w;
}
void Rectangle::setHeight(int h){
	height = h;
}
int Rectnagle::getHeight(){
	return height;
}
int Rectangle::getWidth(){
	return width; 
}
