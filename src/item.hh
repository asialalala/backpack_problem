#ifndef ITEM_HH
#define ITEM_HH
#include <iostream>

class item
{
private:
    /* data */
    float Weight;
    float Cost;
public:
    item(float weight, float cost);
    ~item();
    float weight();
    float cost();
};

#endif
