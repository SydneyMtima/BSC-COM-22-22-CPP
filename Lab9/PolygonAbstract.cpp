#include "PolygonAdstract.h"
#include <iostream>

using namespace std;

void PolygonAbstract::SetValues(int width, int height){
    mWidth = width;
    mHeight = height;
}
void PolygonAbstract::PrintArea()
{
cout << this->Area() << '\n';
}