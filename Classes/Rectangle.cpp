// Implementation

#include "Rectangle.h"

void Rectangle::setWidth(double w)
{
    width = w;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return length * width;
}