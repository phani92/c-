#include<iostream>
#include<math.h>
using namespace std;

// Each class can also have multiple constructors and this concept is called as constructor overloading.
// Constructors can be declared with default values and when the values are not passed to this function then the default values are used.

class point{
    int x, y;
    friend float distance(point o1, point o2);

    public:
      void coOrdinates(int a, int b) {
        x = a;
        y = b;
        cout << "Co-ordinates are: " << "(" <<x<< "," <<y<< ")"<<endl;
      }
};

float distance(point o1, point o2){
    return (sqrt(pow(( o1.x - o2.x ),2) + pow(( o1.y - o2.y ),2)));
}

int main(){
    point a, b;
    a.coOrdinates(1,1);
    b.coOrdinates(1,1);
    cout << "Distance is: "<<distance(a,b)<<endl;

    a.coOrdinates(0,1);
    b.coOrdinates(0,6);
    cout << "Distance is: "<<distance(a,b)<<endl;

    a.coOrdinates(1,0);
    b.coOrdinates(70,0);
    cout << "Distance is: "<<distance(a,b)<<endl;
    return 0;
}