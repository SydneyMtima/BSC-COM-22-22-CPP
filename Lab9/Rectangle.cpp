#include "Rectangle.h"

Rectangle::Rectangle(int width, int height){
    mWidth = width;
    mHeight = height;
}
int Rectangle::Area()
{
return mWidth * mHeight;
}