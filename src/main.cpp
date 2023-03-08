#include <iostream>
#include "item.hh"
#include "backpack.hh"

int main(int, char**) {
    backpack asiasbackpack(50);
    item earings(1,100);
    item tv(15,6100);
    item iphone(9, 1300);
    item bike(30,2000);

    std::cout << item::number();
    //int item_tab = new int(item.number);

}

