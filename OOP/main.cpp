#include <iostream>
#include "cylinder.h"

using namespace std;

int main()
{
    Cylinder cylinder1(10, 10);
    cout << "Volume: " << cylinder1.volume() << endl;

    // Managing a stack object through pointers
    Cylinder* p_cylinder1 = &cylinder1;

    cout << "Volume: " << p_cylinder1->volume() << endl;

    return 0;
}