// Specification file

#ifndef RECTANGLE_H
#define PECTANGLE_H

class Rectangle
{
private:
    // declaration of private members
    double width;
    double length;

public:
    // declaration of public members
    void setWidth(double); // mutator

    // inline definition - defined inside of the class
    void setLength(double l) { length = l; }

    // accessors
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

#endif