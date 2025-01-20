#include <iostream>
using namespace std;

// base class -- abstract
// contain at least 1 virtual function
// This class only exists to be derived from
// Cannot instantiate an object from it
class Sim
{
public:
    // anything that is a Sim, must override function print
    virtual void print() const = 0; // Virtual Function
};

class Tag : public Sim
{
public:
    virtual void print() const
    {
        cout << "I am a Tag class!" << endl;
    }
};

class Bun : public Sim
{
    public:
    virtual void print() const
    {
        cout << "\"I love this Game!!\" class." << endl;
    }
};
int main()
{
    Tag t;
    t.print();

    Bun b;
    b.print();
}