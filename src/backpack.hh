#ifndef BACKPACK_HH
#define BACKPACK_HH
#include <iostream>

class backpack
{
private:
    /* data */
    float Space;
public:
    backpack(float space);
    ~backpack();
    float space();
};



#endif