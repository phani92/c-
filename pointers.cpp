#include<iostream>
using namespace std;

int main(){

     // int a = 10;
     // int* b = &a;

     // /* Address of operator */
     // cout << "value of b " << b << endl;
     // /* Dereference operator -> returns value from a pointer */
     // cout << "Dereferences a pointer " << *b << endl;
     // /* Pointer to pointer -> double pointer. */
     // int** c = &b;
     // cout << "Double pointer -> prints the address of which points the address of b " << c << endl;

     // // Arrays and pointers
     // // In c++ dynamic arrays can be given like below, it will automatically figure out the number of elements.
     // int array[] = {1,2,3,4,5,6,7,8,9,10};
     // // when pointing an array we can directly use the array variable and dont have to use '&' for pointing to memory of the variable.
     // int* pointer = &array[0];
     // cout << "first occurrence " << *pointer+5 << endl;

     // Dynamic allocation using new keyword.
     // () --> it assigns the value inside it to the address.
     int *pArr = new int[40];
     // [] --> it declares an array of size 40.
     int *p = new int(40);
     cout << *(p) << endl;
     // Memory has to be freed using delete.
     delete p;
     cout << *(pArr) << endl;
     delete[] pArr;

     return 0;
}
