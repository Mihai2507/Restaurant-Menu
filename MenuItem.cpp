#include "MenuItem.h"

MenuItem::MenuItem(string name, string description, double price) {
    this->name = name;
    this->description = description;
    this->price = price;
}

string MenuItem::getName() const {
    return name;
}

string MenuItem::getDescription() const {
    return description;
}

double MenuItem::getPrice() const {
    return price;
}
