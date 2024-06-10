#pragma once
#include "Polygon.h"

class Rectangle : public Polygon
{
private:
        int mWidth;
        int mHeight;

public:
        Rectangle(int width, int height);
        int Area();
};