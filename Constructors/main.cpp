#include <iostream>
using namespace std;

class Triangle
{
private:
    double base;
    double height;

public:
    // constructor
    Triangle() // default constructor
    {
        cout << "Entering the default constructor... Fasten your seatbelts" << endl;
    }

    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    // mutator
    void setBase(double b) { base = b; }
    void setHeight(double h) { height = h; }

    // accessors
    double getBase() const { return base; }
    double getHeight() const { return height; }
    double getArea() const { return 0.5 * base * height; }
};

int main()
{
    Triangle t1;

    Triangle t2(1.2, 3.4);
    cout << t2.getArea() << endl;

    Triangle *t2ptr = new Triangle(8.3, 3.1);
    cout << t2ptr->getArea() << endl;

    delete t2ptr;
}