#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop::setprice(void)
{
    cout << "Enter the Id of the item: " << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}

// Reminder:- counter works same as the 'i' because the index number will be same