#include "item.hh"

item::item(float weight, float cost)
{
    Weight = weight;
    Cost = cost;
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