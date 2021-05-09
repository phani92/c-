// Example for a bidirectional linear list.
// List needs to be used when one has to delete or insert elements in between the list.

#include<iostream>
#include<list>
using namespace std;

template <class T1>
void display(list<T1> &lst){
  list<int> :: iterator itr;
  for (itr = lst.begin(); itr != lst.end(); itr++)
  {
    cout<< *itr << " ";
  }
  cout << endl;
};

int main(){
  list<int> lst1; // empty list
  // insert element in the end of the list
  lst1.push_back(5);
  lst1.push_back(6);
  lst1.push_back(7);
  lst1.push_back(8);
  lst1.push_back(9);
  lst1.push_back(10);

  // insert element in the start of the list
  lst1.push_front(1);

  // sorting list
  lst1.sort();
  display(lst1);

  // delete a last element
  lst1.pop_back();
  // delete a first element
  lst1.pop_front();
  // removes an element with the specified value.
  lst1.remove(6);

  // display
  display(lst1);

  return 0;
}