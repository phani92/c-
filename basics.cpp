#include <iostream>
#include <iomanip>

using namespace std;

int num1 = 1234;

// Command line single shot execution - if ($?) { g++ basics.cpp -o basics }; if ($?) { .\basics }

int main()
{
    int num1;
    /* << is called as insertion operator. */
    cout << "Enter any number \n";
    /* >> is called as extraction operator. */
    cin >> num1;

    // Cpp reference header files can be taken from www.cppreference.com
    // endl can be used for next line.
    cout << "local num1 is: " << num1 << endl;
    // :: is called scope resolution operator.
    cout << "Global num1 is: " << ::num1 << endl;
    cout<<endl<<endl;

    // Normally a floating point number is forwarded to a calling function as a double. To pass it as a float an 'f' should be added in the front.
    float floatNum = 24.5f;
    double doubleNum = 14.5l;
    cout << "float is " << floatNum << endl;
    cout << "Double is " << doubleNum << endl;
    cout<<endl<<endl;

    cout<< "Size of float is " <<sizeof(floatNum) << endl;
    cout<< "Size of double is " <<sizeof(doubleNum) << endl;

    /* Reference variables. Same variable referred with different name. */
    int x = 10;
    int & y = x;
    y = 20;

    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout<<endl<<endl;

    /* setW can be used for adjusting the width during the output display. */
    cout << "x without setw is " << x <<endl;
    cout << "x with setw is " << setw(5) << x <<endl;
    cout<<endl<<endl;

    /* c++ operator precedence and associativity is related to arithmetic operators simlar to bodmas. But it is very different compared to bodmas and has
    to be checked in the precedence/associativity website of c++ */



    return 0;
}
