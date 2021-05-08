#include<iostream>
using namespace std;

class Employee
{
  private:
    int age;
    char sex;
  public:
    string name;
    string job;
    void setDetails( int age1, char sex1 );
    void getDetails( void );
};

void Employee :: setDetails(int age1, char sex1)
{
  age = age1;
  sex = sex1;
}

void Employee :: getDetails( void )
{
  cout << name << endl;
  cout << job << endl;
  cout << sex << endl;
  cout << age << endl;
}

int main()
{
  Employee phani;
  phani.job = "Software engineer";
  phani.name = "Phani";
  phani.setDetails( 29, 'M');
  phani.getDetails();
  return 0;
}