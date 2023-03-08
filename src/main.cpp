#include <iostream>
#include "item.hh"
#include "backpack.hh"

int main(int, char**) {
    backpack asiasbackpack(50);
    item earings(20,100);
    item tv(10,6100);
    item iphone(10, 1300);
    item bike(30,2000);

    std::cout << item::number();

    item * itemstab = new item[item::number()];
    itemstab[0] = earings;
    itemstab[1] = tv;
    itemstab[2] = iphone;
    itemstab[3] = bike; 


    delete [] itemstab;
}

