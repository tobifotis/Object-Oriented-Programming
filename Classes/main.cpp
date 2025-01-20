#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle r; // Object
    r.setWidth(2.2);
    r.setLength(3.1);

    cout << r.getLength() << ", " << r.getWidth() << endl;
    cout << r.getArea() << endl;

    Rectangle *p = &r;
    cout << p->getArea() + 5 << endl;

    Rectangle *s = new Rectangle;
    s->setLength(3);
    s->setWidth(2);
    cout << s->getArea() << endl;

    delete s;
}
