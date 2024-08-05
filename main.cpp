#include "Menu.h"

int main() {
    MenuItem item1("Coca-Cola", "330ml", 9);
    MenuItem item2("Fanta", "330ml", 9);
    MenuItem item3("Sprite", "330ml", 9);
    MenuItem item4("Water", "500ml", 7);
    MenuItem item5("Tuborg", "330ml", 11);
    MenuItem item6("Perroni", "330ml", 13);
    MenuItem item7("Ursus", "330ml", 12);
    MenuItem item8("Carlsberg", "330ml", 11);
    MenuItem item9("Tuborg Draft", "600ml", 14);
    MenuItem item10("Quattro Stagioni Pasta", "400g", 35);
    MenuItem item11("Milanese Pasta", "400g", 34);
    MenuItem item12("Margherita Pizza", "450g", 29);
    MenuItem item13("Prosciutto Pizza", "450g", 31);
    MenuItem item14("Quattro Stagioni Pizza", "450g", 32);
    MenuItem item15("Pollo Pizza", "450g", 34);
    MenuItem item16("Greek Salad", "400g", 32);
    MenuItem item17("Chili-Rubbed Flank Steak Salad", "400g", 34);
    MenuItem item18("Caesar Salad with Crispy Artichokes", "400g", 31);
    MenuItem item19("White chocolate cheesecake", "200g", 21);
    MenuItem item20("Banana cake", "200g", 23);
    MenuItem item21("Lava cake", "200g", 26);
    MenuItem item22("Pancakes with Nutella", "200g", 24);
    MenuItem item23("Pancakes with Pistacchio", "200g", 24);
    MenuItem item24("Protein Pancakes", "200g", 24);

    Menu menu;
    menu.addItem(item1);
    menu.addItem(item2);
    menu.addItem(item3);
    menu.addItem(item4);
    menu.addItem(item5);
    menu.addItem(item6);
    menu.addItem(item7);
    menu.addItem(item8);
    menu.addItem(item9);
    menu.addItem(item10);
    menu.addItem(item11);
    menu.addItem(item12);
    menu.addItem(item13);
    menu.addItem(item14);
    menu.addItem(item15);
    menu.addItem(item16);
    menu.addItem(item17);
    menu.addItem(item18);
    menu.addItem(item19);
    menu.addItem(item20);
    menu.addItem(item21);
    menu.addItem(item22);
    menu.addItem(item23);
    menu.addItem(item24);

    menu.getIntroduction();
    return 0;
}
