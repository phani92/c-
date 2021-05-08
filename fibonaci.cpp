// Nth term of fibonacci series

#include<iostream>
using namespace std;

int fibonacci(int input){
  if(input < 2){
    return input;
  }
  else{
    return (fibonacci(input - 1) + fibonacci(input - 2));
  }
}

int main(){
  int input;

  cout << "Enter the value of N"<<endl;
  cin >> input;

  cout << "Nth term of fibonacci series is " << fibonacci(input);
  return 0;
}