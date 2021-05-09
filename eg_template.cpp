#include <iostream>
using namespace std;

// T in template can take any variable type as input.
template <class T>
class Vector
{
public:
  T *arr;
  int size;
  // Constructor
  Vector(int arrSize)
  {
    size = arrSize;
    arr = new T[size];
  }

  // Dot product of two vectors
  T dotProduct(Vector &v)
  {
    T retVal = 0;
    for (int i = 0; i < size; i++)
    {
      retVal += this->arr[i] * v.arr[i];
    }
    return retVal;
  };
};

int main()
{
  Vector<float> v1(3);
  Vector<float> v2(3);

  v1.arr[0] = 1.4;
  v1.arr[1] = 3.3;
  v1.arr[2] = 0.1;
  v2.arr[0] = 0.1;
  v2.arr[1] = 1.90;
  v2.arr[2] = 4.1;

  cout << v1.dotProduct(v2);
  return 0;
}