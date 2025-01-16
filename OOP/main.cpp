#include <iostream>
#include "cylinder.h"

using namespace std;

int main()
{
    Cylinder cylinder1(10, 10);
    cout << "Volume: " << cylinder1.volume() << endl;

    return 0;
}