#include <iostream>

using namespace std;

class MenuItem
{
    public:
        string  name;
        double  calories;

        void print()
        {
            cout << name << " [" << calories << " cal]" << endl;
        }
};

class Drink: public MenuItem
{
    public:
        double  ounces;

        double  cal_per_ounce()
        {
            return (calories / ounces);
        }
};


int main()
{
    MenuItem FrenchFries;

    FrenchFries.name = "French Fries";
    FrenchFries.calories = 400;

    FrenchFries.print();

    Drink hot_choc;

    hot_choc.name = "hot choc";
    hot_choc.calories = 300;
    hot_choc.ounces = 8;

    hot_choc.print();
    cout << "cal/ounce: " << hot_choc.cal_per_ounce() << endl; 
    
    return (1);
}