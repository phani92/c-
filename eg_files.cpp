#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
  string temp;
  // Opening files using constructor and writing a string into it.
  // Method 1 using constructor -> ofstream out("egTextFile.txt");
  // Method 2 using method of a constructor -> ofstream out("egTextFile.txt");
  ofstream out;
  out.open("egTextFile.txt");
  out << "Hello phani! \n";
  out << "Phani is awesome! \n";
  out << "Phani is amazing! \n";
  out << "Phani is smart! \n";
  out << "Phani is charming! \n";
  out.close();

  // Opening files using constructor and reading it.
  ifstream in;
  in.open("egTextFile.txt");
  // The following code will return only a single word and will break at the
  // instance of space or new line.
  // in >> temp;
  // Function to read a complete line.
  while(in.eof() == 0) {
    getline(in, temp);
    cout << temp << endl;
  }
  in.close();

  return 0;
}