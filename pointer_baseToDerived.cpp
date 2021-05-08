#include<iostream>
using namespace std;

// We create a base class
class Base {
  public:
    char var_base;
    void display(){
      cout<<"The value of var_base is " << var_base << endl;
    };
};

// We create a derived class
class Derived: public Base{
  public:
    char var_derived;
    virtual void display(){
      cout<<"The value of var_base is " << var_base << endl;
      cout<<"The value of var_derived is " << var_derived << endl;
    };
};

// In the below example try to change Base* to Derived* and then intellisense will
// show you the accessible elements of the class. Depending on the pointer
// it can be seen which member functions or elements are accessed by the pointer element.

// The run time polymorphism can be handled by assigning the correct pointers of a class.
// Change the pointer of ptrBase and see the difference in the below example.

// To test virtual functions just replace line 8 `void display()` with `virtual void display()`
// and see the difference.

// A base class object pointer can be assigned derived class object but it does not work
// vice-versa.

int main(){
  // Create a pointer for base.
  Base* ptrBase;
  // Create object
  Derived derivedObj;
  // Pass the derived object address to base pointer.
  ptrBase = &derivedObj;

  // Now since the pointer was created for base object the derived class object
  // will use base class function and not the derived class display function.
  ptrBase->var_base = 'B';
  ptrBase->display();
  return 0;
}