#include "Polygon.h"

class Triangle : public Polygon {
private:
    int mWidth;
    int mHeight;
public:
    Triangle(int width, int height);
    int Area();
};