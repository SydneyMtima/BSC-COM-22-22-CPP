#pragma once
#include <iostream>

class PolygonAbstract{
    //protected members
protected:
    int mWidth;
    int mHeight;

// public member functions
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;
    void PrintArea();
};
