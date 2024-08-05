#ifndef MENU_H
#define MENU_H

#include <vector>
#include "MenuItem.h"

class Menu {
private:
    vector<MenuItem> items;
    string drink;
    string food;
    string desert;
    string name;
    string raspuns;
    string r2;

public:
    void addItem(MenuItem item);
    void getIntroduction();
};

#endif // MENU_H
