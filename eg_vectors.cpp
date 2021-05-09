#include<iostream>
#include<vector>
using namespace std;

template <class T1>
void display(vector<T1> &v){
  for (size_t i = 0; i < v.size(); i++)
  {
    cout<< v[i] << " ";
  }
  cout << endl;
};

int main(){
  // Vector automatically manages size.
  vector<int> vec1; // Zero length vector
  // vector<int> vec2(4); // 4 element length vector
  // vector<int> vec3(6,12); // A vector which has 12 elements with value 6.

  int size, element;
  cout << "Enter size of the vector" << endl;
  cin >> size;
  for (size_t i = 0; i < size; i++)
  {
    cout << "Enter a value" << endl;
    cin >> element;
    // enters an element into the vector.
    vec1.push_back(element);
  }

  // removes the last element.
  vec1.pop_back();
  // Inserts an element into the vector.
  // syntax: insert(pointer,count,value)
  vector<int> :: iterator iter = vec1.begin();
  vec1.insert(iter,10,100);

  display(vec1);
  return 0;
}