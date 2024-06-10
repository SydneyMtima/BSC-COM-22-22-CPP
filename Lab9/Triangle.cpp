#include "Triangle.h"

Triangle::Triangle(int width, int height){
    mWidth = width;
    mHeight = height;
}
int Triangle::Area()
{
return mWidth * mHeight / 2;
}