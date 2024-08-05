#include <iostream>
#include "Menu.h"

void Menu::addItem(MenuItem item) {
    items.push_back(item);
}

void Menu::getIntroduction() {
    cout << "<3 <3 !Welcome to our restaurant! <3 <3" << endl
         << "Would you like to see the menu?" << endl;
    cin >> raspuns;
    if (raspuns == "YES" || raspuns == "Yes" || raspuns == "yes") {
        for (auto i : items) {
            cout << i.getName() << " " << i.getDescription() << " " << i.getPrice() << " lei" << endl;
        }
    } else {
        cout << "Ok. Call me if you need something.";
        exit(0);
    }
    cout << "Would you like to order drinks?" << endl;
    cin >> name;
    if (name == "YES" || name == "Yes" || name == "yes") {
        cout << "What drink would you like?" << endl;
        cin >> drink;
    } else {
        cout << "Ok." << endl;
    }

    cout << "And what do you want to eat?" << endl;
    cin >> food;

    cout << "And will you take a dessert at the end?" << endl;
    cin >> r2;
    if (r2 == "Yes" || r2 == "YES" || r2 == "yes") {
        cout << "Ok. You can tell me what you want to order." << endl;
        cin >> desert;
        cout << "Good choices! I will come with the food and dessert in a moment!" << endl;
    } else {
        cout << "Ok. I will come with the food in a moment!" << endl;
    }
}
