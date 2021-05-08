#include<iostream>
using namespace std;

// Properties of friend function:
// It is only a declaration and not a member of the class.
// since it is not in the scope of the class, the objects cannot call this function
// A friend function has access to the private members of the class
// but does not belong to the class.
// Example - if you try a.addComplexNum, it will throw error
// Friend function can be declared in the public or private section of the class.
// It cannot access the members directly by their names and need object_name.member to
// fetch the value.
// Its also possible to friend the entire class.
// Incase there are lot of functions that needs to be friend with a class then all the functions
// dont have to be added manually, instead just friend the class.
// Example: friend class Calculator

class Complex{
  int num1, num2;

  friend Complex addComplexNum(Complex o1, Complex o2);
  public:
    void getNumbers(void);
    void displayComplexNum();
};

void Complex::getNumbers(void){
  cout<< "Enter the real component" <<endl;
  cin>>num1;
  cout<< "Enter the imaginary component" <<endl;
  cin>>num2;
}

Complex addComplexNum(Complex o1, Complex o2){
  Complex retObj;
  retObj.num1 = o1.num1 + o2.num1;
  retObj.num2 = o1.num2 + o2.num2;

  return retObj;
}

void Complex::displayComplexNum(){
  cout<<"The complex number is "<<num1<<"+"<<num2<<"i"<<endl;
}


int main(){
  Complex a,b,c,d,sum;

  a.getNumbers();
  a.displayComplexNum();

  b.getNumbers();
  b.displayComplexNum();

  c.getNumbers();
  c.displayComplexNum();

  d.getNumbers();
  d.displayComplexNum();

  sum = addComplexNum(a,b);
  sum.displayComplexNum();
  return 0;
}
