/* This program is an example of hybrid inheritance illustrated
   with the help of a simple and scientific calculator. */

#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265

/* Base class for input */
class Input
{
  float num1;
  float num2;

public:
  Input()
  {};

  void setInp(float a = 0.00, float b = 0.00)
  {
    num1 = a;
    num2 = b;
  }

  float getNum1(void)
  {
    return num1;
  }

  float getNum2(void)
  {
    return num2;
  }

  friend void getUserInput(Input obj);
};

/* Derived class 1 */
class simpleCal : public Input
{
public:
  void sum(void)
  {
    cout << "The sum of " << getNum1() << " and " << getNum2() << " is " << getNum1() + getNum2() << endl;
  };

  void difference(void)
  {
    cout << "The difference between " << getNum1() << " and " << getNum2() << " is " << getNum1() - getNum2() << endl;
  };

  void product(void)
  {
    cout << "The product of " << getNum1() << " and " << getNum2() << " is " << getNum1() * getNum2() << endl;
  };

  void quotient(void)
  {
    cout << "The quotient of " << getNum1() << " and " << getNum2() << " is " << getNum1() / getNum2() << endl;
  };
};

/* Derived class 2 */
class scientificCal : public Input
{
public:
  void power(void)
  {
    cout << "The value of " << getNum1() << " raised to " << getNum2() << " is " << pow(getNum1(), getNum2()) << endl;
  };

  void nthRoot(void)
  {
    cout << "The value of " << getNum1() << " root of " << getNum2() << " is " << pow(getNum1(), (1.0 / getNum2())) << endl;
  };

  void log(void)
  {
    cout << "The tenth logarithmic value of " << getNum1() << " is " << log10(getNum1()) << endl;
    cout << "The tenth logarithmic value of " << getNum2() << " is " << log10(getNum2()) << endl;
  };

  void sine(void)
  {
    cout << "The sine of " << getNum1() << " degrees is " << sin((getNum1() * PI) / 180) << endl;
    cout << "The sine of " << getNum2() << " degrees is " << sin((getNum2() * PI) / 180) << endl;
  };
};

/* Hybrid class out of derived class 1 and 2 */
class hybridCal : public simpleCal, public scientificCal
{
public:
  void execSimpleCal(Input obj)
  {
    simpleCal::setInp(obj.getNum1(), obj.getNum2());
    sum();
    difference();
    product();
    quotient();
  };

  void execScientificCal(Input obj)
  {
    scientificCal::setInp(obj.getNum1(), obj.getNum2());
    power();
    nthRoot();
    log();
    sine();
  };
};

void getUserInput(Input *obj)
{
  float num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;

  obj->setInp(num1, num2);
};

int main()
{
  Input firstObj;
  hybridCal sol;
  /* Fetch input */
  getUserInput(&firstObj);
  /* Calculator output */
  sol.execSimpleCal(firstObj);
  sol.execScientificCal(firstObj);
  return 0;
}
