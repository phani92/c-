// The variables that are common for all objects are stored only once in
// memory.

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter itemId of your item number " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter price of the item." << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop laden;
    laden.initCounter();
    laden.setPrice();
    laden.setPrice();
    laden.setPrice();
    laden.setPrice();
    laden.getPrice();
    return 0;
}
