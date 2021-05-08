#include <iostream>
using namespace std;

// Public, private and protected.
class Base
{
  int a;

protected:
  int b;

public:
  int c;
  int getA(void)
  {
    a = 10;
    return a;
  }
};

class Derived : public Base
{
public:
  int A;
  Derived(){
    b = 1;
    c = 2;
    A = getA();
  }
};

int main()
{
  Base firstExample;
  Derived dervExample;
  cout << "The value of protected value is: "<<firstExample.getA() << endl;
  cout << "The value of protected value is: "<<firstExample.c << endl;
  cout << "The value after calling derived class is " << dervExample.c << endl;
  return 0;
}
