#ifndef ITEM_HH
#define ITEM_HH
#include <iostream>

class item
{
private:
    /* data */
    float Weight;
    float Cost;
    static int Number;
public:
    item(float weight, float cost);
    ~item();
    const float weight();
    const float cost();
    static int number();
};

#endif
