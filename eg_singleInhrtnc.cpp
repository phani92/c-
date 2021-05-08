/* Example for single inheritance. */
#include <iostream>
using namespace std;

static int count = 0;

// Base class
class Employee
{
public:
  Employee(){};

  string name;
  float salary;
  int id;
  int skills = 0;

  Employee(string in_name)
  {
    name = in_name;
    salary = 50.000;
    id = ++count;
  };

  void displayDetails(void)
  {
    cout << "The employee " << name << " "
         << "with employee id " << id << " earns " << salary << " dollars per hour knows " << skills << " skills." << endl;
  };
};

/* Derived class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
*/

class programmer : public Employee
{
public:
  programmer(string in_name)
  {
    name = in_name;
    id = ++count;
    salary = 60.000;
    skills = 9;
    displayDetails();
  }
};

int main()
{
  Employee phani("phani");
  phani.displayDetails();
  programmer charles("charles");
  return 0;
}
