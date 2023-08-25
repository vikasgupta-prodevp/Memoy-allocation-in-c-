#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemsprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter id of your item no :" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter  your item price :" << endl;
    cin >> itemsprice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter the Price of items with id " << itemId[i] << " is :" << itemsprice[i] << endl;
    }
}
int main()
{
    Shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}