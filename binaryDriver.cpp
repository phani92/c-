#include <iostream>
#include <string>
using namespace std;

class binary
{
public:
  string s;
  void inputBin(void);
  bool checkBin(void);
  void complimentBin(void);
};

void binary ::inputBin(void)
{
  cout << "Enter a binary number" << endl;
  cin >> s;
}

bool binary ::checkBin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if ((s.at(i) != '0') && (s.at(i) != '1'))
    {
      cout << "Invalid Binary number" << endl;
      return false;
    }
  }
  return true;
}

void binary ::complimentBin(void)
{
  if (checkBin())
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s.at(i) == '1')
      {
        s.at(i) = '0';
      }
      else if (s.at(i) == '0')
      {
        s.at(i) = '1';
      }
    }
  }
}

int main()
{

  binary bin1;
  bin1.inputBin();
  bin1.checkBin();
  bin1.complimentBin();
  cout << bin1.s << endl;

  return 0;
}