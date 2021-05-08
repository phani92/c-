#include <iostream>
#include <string>
using namespace std;

class Friend
{
    static string name[100];
    static int counter;

public:
    void addFriend(void);
    void displayFriendCnt(void);
    static void getCnt(void);
};

// Static variables can be initialised here but not inside the class.
// These variables are also called as class variables.
int Friend::counter;
string Friend::name[100];

void Friend::addFriend(void)
{
    cout << "Enter friends name" << endl;
    cin >> name[counter];
    counter++;
}

void Friend::displayFriendCnt(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Your friend number " << i << " is " << name[i] << "." << endl;
    }
    cout << "Total number of friends is " << counter << endl;
}

// Static functions can only have access to static variables.
void Friend::getCnt(void){
  cout << "Total number of friends is " << counter << endl;
}

int main()
{

    Friend rahul, saketh, raghu;

    rahul.addFriend();
    Friend::getCnt();
    saketh.addFriend();
    Friend::getCnt();
    raghu.addFriend();
    Friend::getCnt();

    return 0;
}