#include<iostream>
using namespace std;

int factorial(int input)
{
  if( input <= 0) {
    return 1;
  }
  else {
    return (input * factorial(input - 1));
  }
}

int main(){

  int input;

  cout << "Enter a number" << endl;
  cin >> input;

  cout << "Factorial is " << factorial(input) <<endl;
  return 0;
}
