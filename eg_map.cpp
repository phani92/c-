#include <iostream>
#include <map>
#include <string>
using namespace std;

template <class T1, class T2>
void display(map<T1, T2> &inpMap)
{
  map<string, int> :: iterator itr;
  for (itr = inpMap.begin(); itr != inpMap.end(); itr++)
  {
    cout << (*itr).first << " " << (*itr).second << "\n";
  }
  cout << endl;
};

int main()
{
  map<string, int> marksMap;
  marksMap["Phani"] = 1;
  marksMap["Saketh"] = 1.5;
  marksMap["Praveen"] = 2;
  marksMap["Adam"] = 3;
  marksMap["Rahul"] = 3.5;

  display(marksMap);

  return 0;
}