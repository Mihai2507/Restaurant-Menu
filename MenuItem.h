#ifndef RESTAURANTMENU_MENUITEM_H
#define RESTAURANTMENU_MENUITEM_H

#include <string>
using namespace std;

class MenuItem {
private:
    string name;
    string description;
    double price;

public:
    MenuItem(string name, string description, double price);
    string getName() const;
    string getDescription() const;
    double getPrice() const;
};

#endif
