#include "item.hh"

int item::number = 0;

item::item(float weight, float cost)
{
    Weight = weight;
    Cost = cost;
    ++number;
}

item::~item()
{
}

float item::weight()
{
    return Weight;
}

float item::cost()
{
    return Cost;
}